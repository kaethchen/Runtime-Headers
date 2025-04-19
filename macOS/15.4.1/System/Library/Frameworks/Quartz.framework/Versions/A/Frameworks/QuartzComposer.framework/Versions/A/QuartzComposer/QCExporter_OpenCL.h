@interface QCExporter_OpenCL : QCImageExporter

- (id)createRepresentationOfType:(id)a0 withProvider:(id)a1 transformation:(id)a2 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 colorSpace:(struct CGColorSpace { } *)a4 options:(id)a5;
- (id)supportedRepresentationTypes;

@end
