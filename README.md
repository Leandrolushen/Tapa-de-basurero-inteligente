# 🤖 PROYECTO 1.º AÑO - Robótica Estática

## 🗑️ Basurero Automatizado de Apertura por Proximidad

---

## 📌 Problemática a ser resuelta

El manejo de residuos en entornos educativos y domésticos presenta dos desafíos principales: **la higiene y la comodidad**. 

1. **Contaminación cruzada:** El contacto físico directo con las tapas de los basureros es una fuente constante de propagación de bacterias y virus.
2. **Falta de practicidad:** En situaciones donde el usuario tiene ambas manos ocupadas, el uso de basureros convencionales resulta incómodo e ineficiente.

Este proyecto busca eliminar la necesidad de contacto físico mediante la automatización, promoviendo un entorno más salubre en laboratorios y aulas, además de fomentar el interés por soluciones tecnológicas aplicadas a problemas cotidianos.

---

## 🔍 Trabajos Relacionados

Para el desarrollo de este proyecto se tomaron como referencia los siguientes antecedentes e investigaciones:

* **Basureros comerciales con sensor infrarrojo:** Productos existentes en el mercado que validan la viabilidad comercial y la utilidad de la apertura automática.
* **Proyectos DIY (Do It Yourself) con Arduino:** Prototipos de código abierto de la comunidad *maker* que sirven de base para la lógica de programación.
* **Bigbelly Smart Waste & Recycling:** Sistemas urbanos inteligentes de gestión de residuos a gran escala.
* **Investigaciones sobre contaminación cruzada:** Estudios que demuestran la acumulación de patógenos en superficies de uso común (como tapas de basura).
* **Prototipos de robótica escolar en ferias de ciencias:** Proyectos previos que demuestran la efectividad pedagógica y técnica de este dispositivo en el ámbito estudiantil.

---

## 💡 Propuesta del Proyecto

Consiste en el diseño y construcción de un **basurero inteligente estático** controlado por una placa de desarrollo Arduino. 

### ⚙️ Funcionamiento del Sistema
* Un **sensor de ultrasonido** mide constantemente la distancia frente a la tapa.
* Cuando un objeto (mano o residuo) se detecta a una distancia menor de **15-20 cm**, el microcontrolador envía una señal a un servomotor.
* El **servomotor**, mediante un mecanismo de palanca o hilo, levanta la tapa de forma automática.
* Tras un retardo programado de **3 a 5 segundos**, la tapa vuelve a su posición original suavemente.

> 🔋 **Nota de diseño:** El desarrollo priorizará la eficiencia energética y la robustez del mecanismo mecánico para asegurar su durabilidad dentro del entorno escolar.

---

## 🛠️ Materiales y Herramientas (Tentativo)

### ⚡ Electrónica y Control
| Componente | Descripción / Modelo | Cantidad |
| :--- | :--- | :---: |
| **Microcontrolador** | Placa Arduino Uno R3 (o compatible) | 1 |
| **Sensor de Proximidad** | Sensor de ultrasonido HC-SR04 | 1 |
| **Actuador** | Servomotor (SG90 para prototipo / MG995 para mayor torque) | 1 |
| **Conectores** | Cables jumper (Macho-Hembra y Macho-Macho) | Varios |
| **Soporte de Pruebas** | Protoboard o placa para soldar | 1 |
| **Alimentación** | Batería de 9V o adaptador de corriente | 1 |

### 🪵 Estructura y Mecánica
* Contenedor de basura (plástico o material ligero).
* Varillas de madera o alambre para el sistema de tracción.
* Pistola de silicona caliente y adhesivos fuertes.

### 💻 Máquinas y Herramientas
* Computadora portátil con el **Arduino IDE** instalado.
* Soldador de estaño y multímetro (para asegurar y verificar conexiones).
* Herramientas de corte (trinchetas, tijeras) y taladro manual.
