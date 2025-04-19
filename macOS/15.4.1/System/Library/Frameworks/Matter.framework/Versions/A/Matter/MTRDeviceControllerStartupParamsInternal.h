@class NSArray, NSObject;
@protocol OS_dispatch_queue, MTRDeviceControllerStorageDelegate;

@interface MTRDeviceControllerStartupParamsInternal : MTRDeviceControllerStartupParams

@property (readonly, nonatomic) void *fabricTable;
@property (readonly, nonatomic) struct Optional<unsigned char> { struct ValueHolder { BOOL mHasValue; union Value { unsigned char mData; } mValue; } mValueHolder; } fabricIndex;
@property (readonly, nonatomic) struct OperationalKeystore { void /* function */ **x0; } *keystore;
@property (readonly, nonatomic) BOOL advertiseOperational;
@property (readonly, nonatomic) BOOL allowMultipleControllersPerFabric;
@property (retain, nonatomic) NSArray *productAttestationAuthorityCertificates;
@property (retain, nonatomic) NSArray *certificationDeclarationCertificates;
@property (readonly, nonatomic) id<MTRDeviceControllerStorageDelegate> storageDelegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *storageDelegateQueue;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithParams:(id)a0;
- (id)initForExistingFabric:(void *)a0 fabricIndex:(unsigned char)a1 keystore:(struct OperationalKeystore { void /* function */ **x0; } *)a2 advertiseOperational:(BOOL)a3 params:(id)a4;
- (id)initForNewController:(id)a0 fabricTable:(void *)a1 keystore:(struct OperationalKeystore { void /* function */ **x0; } *)a2 advertiseOperational:(BOOL)a3 params:(id)a4 error:(struct ChipError { unsigned int x0; char *x1; unsigned int x2; } *)a5;
- (id)initForNewFabric:(void *)a0 keystore:(struct OperationalKeystore { void /* function */ **x0; } *)a1 advertiseOperational:(BOOL)a2 params:(id)a3;
- (BOOL)keypairsMatchCertificates;

@end
