@class NSDictionary, NSString;

@interface PTAssetFSDNetworkInputFrame : NSObject <PTAssetFrame>

@property (nonatomic) unsigned long long index;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } time;
@property (readonly, nonatomic) struct __CVBuffer { } *refImageBuffer;
@property (readonly, nonatomic) struct __CVBuffer { } *auxImageBuffer;
@property (readonly, nonatomic) NSDictionary *unrectifyData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithRef:(struct __CVBuffer { } *)a0 aux:(struct __CVBuffer { } *)a1 unrectifyData:(id)a2 index:(unsigned long long)a3;

@end
