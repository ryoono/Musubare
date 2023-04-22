// 感圧センサ接続ピン
#define SENSOR_PIN A5

void setup() {

  pinMode( SENSOR_PIN, INPUT);

  Serial.begin(9600);
 }

void loop() {

  int res;
  res = analogRead( SENSOR_PIN );

  Serial.println( res );
}
