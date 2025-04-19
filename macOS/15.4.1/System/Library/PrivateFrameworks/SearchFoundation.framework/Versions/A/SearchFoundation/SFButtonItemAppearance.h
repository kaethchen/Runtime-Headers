@class NSString, SFColor, NSDictionary, NSData;

@interface SFButtonItemAppearance : NSObject <SFButtonItemAppearance, NSSecureCoding, NSCopying> {
    struct { unsigned char style : 1; unsigned char role : 1; unsigned char renderingMode : 1; unsigned char preferNoFallbackImage : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int style;
@property (nonatomic) int role;
@property (retain, nonatomic) SFColor *tintColor;
@property (nonatomic) int renderingMode;
@property (nonatomic) BOOL preferNoFallbackImage;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)hasRole;
- (BOOL)hasStyle;
- (BOOL)hasRenderingMode;
- (id)initWithProtobuf:(id)a0;
- (BOOL)hasPreferNoFallbackImage;

@end
