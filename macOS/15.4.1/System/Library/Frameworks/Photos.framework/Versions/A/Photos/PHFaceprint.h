@class NSData;

@interface PHFaceprint : NSObject

@property (readonly, nonatomic) long long faceprintVersion;
@property (readonly, retain, nonatomic) NSData *faceprintData;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)initWithFaceprintData:(id)a0 faceprintVersion:(long long)a1;

@end
