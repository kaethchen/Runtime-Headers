@class HAP2TLVParamServiceList, NSString, HAPTLVUnsignedNumberValue;

@interface HAP2TLVParamAccessorySignature : NSObject <NSCopying, HAPTLVProtocol>

@property (retain, nonatomic) HAPTLVUnsignedNumberValue *accessoryID;
@property (retain, nonatomic) HAP2TLVParamServiceList *serviceList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)parsedFromData:(id)a0 error:(id *)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)parseFromData:(id)a0 error:(id *)a1;
- (id)serializeWithError:(id *)a0;
- (id)initWithAccessoryID:(id)a0 serviceList:(id)a1;

@end
