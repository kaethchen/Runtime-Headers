@class NSString;

@interface PTGlobalVideoHeaderMetadata : NSObject <PTSerializable>

@property (readonly, nonatomic) unsigned int majorVersion;
@property (readonly, nonatomic) unsigned int minorVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)objectFromData:(id)a0;

- (id)initWithMajorVersion:(unsigned int)a0 minorVersion:(unsigned int)a1;
- (unsigned int)sizeOfSerializedObjectWithOptions:(id)a0;
- (BOOL)writeToData:(id)a0 withOptions:(id)a1;

@end
