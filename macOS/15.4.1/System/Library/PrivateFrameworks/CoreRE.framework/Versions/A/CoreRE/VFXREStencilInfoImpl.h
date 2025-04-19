@class MTLStencilDescriptor, NSString;

@interface VFXREStencilInfoImpl : NSObject <VFXStencilInfo>

@property (retain, nonatomic) MTLStencilDescriptor *_frontFaceTest;
@property (retain, nonatomic) MTLStencilDescriptor *_backFaceTest;
@property (nonatomic) unsigned char _frontReferenceValue;
@property (nonatomic) unsigned char _backReferenceValue;
@property (readonly, nonatomic) MTLStencilDescriptor *frontFaceTest;
@property (readonly, nonatomic) MTLStencilDescriptor *backFaceTest;
@property (readonly, nonatomic) unsigned char frontReferenceValue;
@property (readonly, nonatomic) unsigned char backReferenceValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
