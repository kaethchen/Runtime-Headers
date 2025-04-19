@class NSString;

@interface OITSUDurationFormat : NSObject <NSCopying, TSUDataFormat> {
    NSString *mFormat;
    NSString *mName;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)formatWithFormat:(id)a0 name:(id)a1;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)format;
- (id)formatName;
- (id)initWithFormat:(id)a0 name:(id)a1;
- (void)setFormatName:(id)a0;

@end
