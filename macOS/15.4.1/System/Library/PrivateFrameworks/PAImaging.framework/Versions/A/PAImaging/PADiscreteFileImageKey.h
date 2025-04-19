@class NSString, NSDictionary, NSURL, NSDate;

@interface PADiscreteFileImageKey : NSObject <NSCopying> {
    NSDate *_modDate;
}

@property (readonly) NSURL *url;
@property (readonly) NSDictionary *cgOptions;
@property (readonly) NSString *name;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)subsampleFactor;
- (id)copyWithSubsampleFactor:(unsigned long long)a0;
- (id)initWithURL:(id)a0 cgOptions:(id)a1 name:(id)a2;

@end
