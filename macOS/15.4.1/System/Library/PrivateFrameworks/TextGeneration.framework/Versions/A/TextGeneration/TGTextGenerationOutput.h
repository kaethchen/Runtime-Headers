@class NSString;

@interface TGTextGenerationOutput : NSObject <NSCopying> {
    NSString *_description;
}

@property (readonly, copy) NSString *text;
@property (readonly) double score;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithText:(id)a0 score:(double)a1;

@end
