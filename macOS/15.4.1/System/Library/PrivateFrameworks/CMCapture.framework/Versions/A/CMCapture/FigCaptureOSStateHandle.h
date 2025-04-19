@class NSString, FigWeakReference, NSObject;
@protocol OS_dispatch_queue;

@interface FigCaptureOSStateHandle : NSObject {
    NSString *_title;
    NSObject<OS_dispatch_queue> *_queue;
    FigWeakReference *_dataProviderWeakReference;
    id /* block */ _dataProviderBlock;
    unsigned long long _osStateHandle;
}

+ (void)initialize;

- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)_initWithTitle:(id)a0 queue:(id)a1 dataProvider:(id)a2 dataProviderBlock:(id /* block */)a3;
- (struct os_state_data_s { unsigned int x0; union { unsigned int x0 : 32; unsigned int x1; } x1; struct os_state_data_decoder_s { char x0[64]; char x1[64]; } x2; char x3[64]; unsigned char x4[0]; } *)_osStateData:(struct os_state_hints_s { unsigned int x0; char *x1; unsigned int x2; unsigned int x3; } *)a0;
- (id)initWithTitle:(id)a0 queue:(id)a1 dataProvider:(id)a2;
- (id)initWithTitle:(id)a0 queue:(id)a1 dataProviderBlock:(id /* block */)a2;

@end
