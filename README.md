[⬅️ Volver a "Arduino"](https://github.com/SantiagoBaeza/-Portfolio-de-proyectos-Arduino-Embebidos)
# Semáforo inteligente con sensor de luz (Arduino UNO)

Este proyecto simula el funcionamiento de un semáforo que adapta su comportamiento **según las condiciones de luz ambiental** (día/noche), usando una **fotorresistencia (LDR)** como entrada analógica.  
Fue desarrollado y probado con éxito en **Tinkercad** y también montado en un circuito físico.

---

## Componentes utilizados

- Arduino UNO
- 3 LEDs (rojo, amarillo y verde)
- Fotorresistencia (LDR)
- Resistencia de 10kΩ para el divisor de voltaje
- Jumpers y protoboard

---

## Lógica del proyecto

### 🌞 Modo Día:
- El semáforo funciona en ciclo completo (verde → amarillo → rojo) con parpadeos simulando la lógica de tránsito real.
- Se agregaron **parpadeos finales** en los LEDs verde y rojo antes de cambiar de estado, para mayor realismo.

### 🌙 Modo Noche:
- El semáforo entra en modo intermitente, haciendo **parpadear el LED amarillo** cada 500 ms.

El cambio de modo se determina por el valor leído desde el pin analógico A0 (LDR), con un umbral establecido en `102`.

---

## Capturas del proyecto

![ Ver imagen del circuito](https://github.com/SantiagoBaeza/semaforo-y-fotorresistencia/blob/main/03imagen_semaforo.jpg)

![ Ver gif del circuito fisico](https://github.com/SantiagoBaeza/semaforo-y-fotorresistencia/blob/main/04semaforo.gif)

---

## Proceso de desarrollo

### 🔹 Paso 1: Primer algoritmo
Se desarrolló un código funcional básico para establecer la lógica de encendido de los LEDs según el valor leído del LDR.  
![ Ver código inicial](https://github.com/SantiagoBaeza/semaforo-y-fotorresistencia/blob/main/01semafoto.ino)

### 🔹 Paso 2: Optimización del flujo
El código fue refinado para simular de forma más precisa los ciclos de un semáforo real (con parpadeos, tiempos más realistas, y mayor legibilidad).  
[ Ver código optimizado](https://github.com/SantiagoBaeza/semaforo-y-fotorresistencia/blob/main/02semaforo.ino)

---

## Ideas para futuras versiones

- Agregar un botón para simular **paso peatonal** con su propio ciclo de luces.
- Usar `millis()` en vez de `delay()` para permitir múltiples procesos simultáneos.
- Incorporar una pantalla LCD para mostrar el estado actual del sistema.

---

## 🧪 Probado en

- [👉 Usar simulacion en Tinkercad](https://www.tinkercad.com/things/4D78VeTMfbF-semaforo-con-sensor-de-luz)
- Arduino UNO físico (código cargado por USB desde Arduino IDE)

