@class NSArray, NSString;

@interface SGTypeDescription : NSObject {
    void /* unknown type, empty encoding */ type;
    void /* unknown type, empty encoding */ properties;
}

@property (nonatomic, readonly) NSArray *properties;
@property (nonatomic, readonly) unsigned int size;
@property (nonatomic, readonly) unsigned int alignment;
@property (nonatomic) void /* unknown type, empty encoding */ offset;
@property (nonatomic, readonly) NSString *description;

+ (id)typeDescriptionRepresenting:(unsigned long long)a0 error:(id *)a1;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)getMTLDataType:(unsigned long long *)a0;
- (BOOL)getMTLTextureType:(unsigned long long *)a0;

@end
