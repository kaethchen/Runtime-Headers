@class NSString, NSData;

@interface MPSGraphViewerNodePropertyStringSPI : MPSGraphObject <MPSGraphViewerNodePropertySPI> {
    NSData *_stringUTF8Data;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *stringValue;

+ (id)type;

- (void).cxx_destruct;
- (unsigned int)dataType;
- (id)initWithName:(id)a0 value:(id)a1;
- (id)shape;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0;
- (unsigned long long)dataLength;
- (id)dataWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)isEnum;
- (BOOL)isSplat;
- (id)enumCases;

@end
