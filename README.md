# Intr-Oral-Cavity-Supervised-Learning-
# Empowering Portable Optoelectronics With Computer Vision for Intraoral Cavity Detection  

This repository contains the code and resources associated with the paper:  

> **S. Khuntia et al., "Empowering Portable Optoelectronics With Computer Vision for Intraoral Cavity Detection,"**  
> *IEEE Sensors Journal, vol. 24, no. 16, pp. 25911-25919, 15 Aug. 2024.*  
> [DOI: 10.1109/JSEN.2024.3413025](https://doi.org/10.1109/JSEN.2024.3413025)  

## 📌 Overview  

In this work, we propose a computer vision-based approach for intraoral cavity detection using portable optoelectronic devices. The system integrates real-time image processing and machine learning techniques to enhance oral healthcare diagnostics. This repository includes the implementation of our detection pipeline, pre-trained models, and necessary scripts for dataset preprocessing and evaluation.  

## ⚙️ Installation  

To set up the environment and run the code, follow these steps:  

1. **Clone the repository**  
   ```bash
   git clone https://github.com/your-username/intraoral-cavity-detection.git
   cd intraoral-cavity-detection
   ```

2. **Create a virtual environment (optional but recommended)**  
   ```bash
   python -m venv env
   source env/bin/activate  # On Windows: env\Scripts\activate
   ```

3. **Install dependencies**  
   ```bash
   pip install -r requirements.txt
   ```

## 🚀 Usage  

Run the main detection script on a sample image:  
```bash
python detect.py --image path/to/sample.jpg
```

For real-time video processing from a webcam:  
```bash
python detect.py --video 0
```

### Model Inference  
We provide a pre-trained model (`model.pth`). You can use it directly for inference:  
```python
from model import IntraoralDetector
model = IntraoralDetector("model.pth")
prediction = model.predict("sample_image.jpg")
```

## 📂 Dataset  

The dataset used in this study comprises intraoral images collected under controlled conditions. Due to privacy concerns, we cannot publicly share the dataset. However, interested researchers may contact us for collaboration.  

## 📜 Citation  

If you use this code or dataset in your research, please cite our paper:  

```bibtex
@article{khuntia2024intraoral,
  author={Khuntia, S. and others},
  title={Empowering Portable Optoelectronics With Computer Vision for Intraoral Cavity Detection},
  journal={IEEE Sensors Journal},
  year={2024},
  volume={24},
  number={16},
  pages={25911-25919},
  doi={10.1109/JSEN.2024.3413025}
}
```

## 📧 Contact  

For any questions or collaborations, please reach out to:  
📩 [sucharita.khuntia.ee10@nycu.edu.tw]  
🔗 [https://bit.ly/SucharitaKhuntia]  

---

### 🔥 Contributions  
We welcome contributions to improve this project. Please follow the standard pull request guidelines if you'd like to contribute.  

---

## ⚠️ License  
This project is licensed under the MIT License. See the `LICENSE` file for details.  
```

Would you like to customize any section further, such as adding more details on the dataset, model architecture, or evaluation metrics?
