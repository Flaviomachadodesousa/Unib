#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include <ESP8266WebServer.h>
#include <ESP8266mDNS.h>

#ifndef STASSID
#define STASSID "Redmi5"
#define STAPSK  "Redmi5Chicko"
// HTML
#endif

String link = "'https://cloud.cadexchanger.com/embedded.html?fileId=5daded1e95c3120046777bf7&cameraType=perspective&autoPlay=1'";
String BootStrap_Link = "'https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/css/bootstrap.min.css'";
const char* ssid = STASSID;
const char* password = STAPSK;

ESP8266WebServer server(80);

void handleRoot() 
{
  //  HTML
  String html = "<!DOCTYPE><head><title>Robo</title></head>";
  html += "<meta charset='utf-8'>";
  html += "<meta name='viewport' content='width=device-width'>";
  // LINKS BOOTSTRAP
  html += "<link rel='stylesheet' href='https://cdnjs.cloudflare.com/ajax/libs/animate.css/3.7.2/animate.min.css'>";
  html += "<link rel='stylesheet' href="+BootStrap_Link;
  html += "integrity='sha384-BVYiiSIFeK1dGmJRAkycuHAHRg32OmUcww7on3RYdg4Va+PmSTsz/K68vbdEjh4u' crossorigin='anonymous'>";
  html += "<link rel='stylesheet' href='https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/css/bootstrap-theme.min.css' integrity='sha384-rHyoN1iRsVXV4nD0JutlnGaslCJuC7uwjduW9SVrLvRYooPp2bWYgmgJQIXwl/Sp' crossorigin='anonymous'>";
  html += "<script src='https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/js/bootstrap.min.js' integrity='sha384-Tc5IQib027qvyjSMfHjOMaLkfuWVxZxUPnCJA7l2mCWNIpG9mGCD8wGNIcPD7Txa' crossorigin='anonymous'></script>";
  // FIM LINKS BOOTSTRAP
  html += "<style>h1{color:black;}</style></head>";
  html += "<body bgcolor='ffffff'><center><h1>";
  html += "<img src='https://i.ibb.co/hc5w6Hr/Untitled-2.png' alt='Responsive image'>";
  // SCRIPTS
  html += "<script src='https://code.jquery.com/jquery-3.3.1.slim.min.js' integrity='sha384-q8i/X+965DzO0rT7abK41JStQIAqVgRVzpbzo5smXKp4YfRvH+8abtTE1Pi6jizo' crossorigin='anonymous'></script>";
  html += "<script src='https://cdnjs.cloudflare.com/ajax/libs/popper.js/1.14.7/umd/popper.min.js' integrity='sha384-UO2eT0CpHqdSJQ6hJty5KVphtPhzWj9WO1clHTMGa3JDZwrnQq4sF86dIHNDz0W1' crossorigin='anonymous'></script>";
  html += "<script src='https://stackpath.bootstrapcdn.com/bootstrap/4.3.1/js/bootstrap.min.js' integrity='sha384-JjSmVgyd0p3pXB1rRibZUAYoIIy6OrQ6VrjIEaFf/nJGzIxFDsf4x0xIM+B07jRM' crossorigin='anonymous'></script>";
  // FIM SCRIPTS
  html += "<h1>Robo seguidor de linha com IOT</h1>";
  html += "<div class='alert alert-danger' role='alert'>Recomendamos que use o navegado em modo Anonimo para o carregamento do projeto em 3D!</div>";
  html += "<h4>Turma do 6° Semestre de Ciência da Computação</h4>";
  html += "<h3>Projeto realizado dentro da Unib, com a orientação do professor Eduardo Furlan</h3>";
  html += "<br>";
  // 3D ARDUINO
  html += "<h5>Modelo 3D da placa principal - Arduino Uno</h5>";
  html += "<iframe src=" + link;
  html += "width='auto' height='auto' frameborder='0'>";
  html += "</iframe>";
  html += "<br>";
  // RELAÇÃO DAS PEÇAS
  html += "<h4>Relação de peças usadas</h4>";
  html += "<p>1 - Arduino uno R1.</p>";
  html += "<p>1 - Modulo Wi-fi Esp-01 Esp8266.";
  html += "<p>2 - Motores DC Gearbox.";
  html += "<p>1 - Driver Ponte H L298N.";
  html += "<p>3 - Sensores Reflexivo Ótico modelo Ir Tcrt5000.";
  html += "<p>1 - kit de lego com 2 rodas.";
  html += "<p>1 - Rodízio Giratório (roda boba) com diametros 4 cm altura, 5cm comprimento, 3 largura.";
  html += "<p>2 - Baterias de 9v recarregavel.";
  html += "<p>3 Leds - 1 - Vermelho, 1 - Azul e 1 - Verde";
  html += "<br>";
  html += "<br>";
  // FOTOS
  html += "<div class='container'>";
  html += "<h1 class='font-weight-light text-center text-lg-left mt-4 mb-0'>Galeria</h1>";
  html += "<hr class='mt-2 mb-5'>";
  html += "<div class='row text-center text-lg-left'>";
  // FOTO 1
  html += "<div class='thumbnail'>";
  html += "<img src='https://i.ibb.co/qgwZMYS/IMG-20191026-152529.jpg' alt=''>";
  html += "</div>";
  // FOTO 2
  html += "<div class='thumbnail'>";
  html += "<img src='https://i.ibb.co/gzCFDwf/IMG-20191026-152535.jpg' alt=''>";
  html += "</div>";
  // FOTO 3
  html += "<div class='thumbnail'>";
  html += "<img src='https://i.ibb.co/NT3qGq0/IMG-20191026-152555.jpg' alt=''>";
  html += "</div>";
  // FOTO 4
  html += "<div class='thumbnail'>";
  html += "<img src='https://i.ibb.co/s2wMsXw/IMG-20191026-163646.jpg' alt=''>";
  html += "</div>";

  html += "</div>";
  html += "</div>";
  
  // FIM FOTOS
  html += "</body>";
  html += "</html>";
  
  //  Enviando HTML para servidor
  server.send(200, "text/html",html);
}

void handleNotFound() {
  String message = "File Not Found\n\n";
  message += "URI: ";
  message += server.uri();
  message += "\nMethod: ";
  message += (server.method() == HTTP_GET) ? "GET" : "POST";
  message += "\nArguments: ";
  message += server.args();
  message += "\n";
  for (uint8_t i = 0; i < server.args(); i++) {
    message += " " + server.argName(i) + ": " + server.arg(i) + "\n";
  }
  server.send(404, "text/plain", message);
}

void setup(void) {
  Serial.begin(115200);
  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);
  Serial.println("");

  // Wait for connection
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.print("Connected to ");
  Serial.println(ssid);
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());

  if (MDNS.begin("esp8266")) {
    Serial.println("MDNS responder started");
  }

  server.on("/", handleRoot);

  server.on("/inline", []() {
    server.send(200, "text/plain", "this works as well");
  });

  server.onNotFound(handleNotFound);

  server.begin();
  Serial.println("HTTP server started");
}

void loop(void) {
  server.handleClient();
  MDNS.update();
}
