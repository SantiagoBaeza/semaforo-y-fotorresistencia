# 🚦 Semáforo inteligente con sensor de luz (Arduino UNO)

Este proyecto simula el funcionamiento de un semáforo que adapta su comportamiento **según las condiciones de luz ambiental** (día/noche), usando una **fotorresistencia (LDR)** como entrada analógica.  
Fue desarrollado y probado con éxito en **Tinkercad** y también montado en un circuito físico.

---

## 🧰 Componentes utilizados

- Arduino UNO
- 3 LEDs (rojo, amarillo y verde)
- Fotorresistencia (LDR)
- Resistencia de 10kΩ para el divisor de voltaje
- Jumpers y protoboard

---

## ⚙️ Lógica del proyecto

### 🌞 Modo Día:
- El semáforo funciona en ciclo completo (verde → amarillo → rojo) con parpadeos simulando la lógica de tránsito real.
- Se agregaron **parpadeos finales** en los LEDs verde y rojo antes de cambiar de estado, para mayor realismo.

### 🌙 Modo Noche:
- El semáforo entra en modo intermitente, haciendo **parpadear el LED amarillo** cada 500 ms.

El cambio de modo se determina por el valor leído desde el pin analógico A0 (LDR), con un umbral establecido en `102`.

---

## 📸 Capturas del proyecto

> 🖼️ Agregá acá una captura de pantalla del simulador y, si podés, una imagen o gif del circuito físico funcionando.

---

## 🧠 Proceso de desarrollo

### 🔹 Paso 1: Primer algoritmo
Se desarrolló un código funcional básico para establecer la lógica de encendido de los LEDs según el valor leído del LDR.  
[👉 Ver código inicial](ruta/a/semaforo_v1.ino)

### 🔹 Paso 2: Optimización del flujo
El código fue refinado para simular de forma más precisa los ciclos de un semáforo real (con parpadeos, tiempos más realistas, y mayor legibilidad).  
[👉 Ver código optimizado](ruta/a/semaforo_optimizado.ino)

---

## 💡 Ideas para futuras versiones

- Agregar un botón para simular **paso peatonal** con su propio ciclo de luces.
- Usar `millis()` en vez de `delay()` para permitir múltiples procesos simultáneos.
- Incorporar una pantalla LCD para mostrar el estado actual del sistema.

---

## ✍️ Autor

Proyecto desarrollado por **Santiago Baeza**, como parte de su portfolio de automatización y sistemas embebidos.

---

## 🧪 Probado en

- [Tinkercad Circuits](https://www.tinkercad.com/)
- Arduino UNO físico (código cargado por USB desde Arduino IDE)

