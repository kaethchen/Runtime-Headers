@class NSString;

@interface TGTextGenerationDecodingPolicy : NSObject <NSCopying> {
    NSString *_description;
}

@property (readonly) unsigned long long type;

+ (id)defaultDecodingPolicy;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0;

@end
