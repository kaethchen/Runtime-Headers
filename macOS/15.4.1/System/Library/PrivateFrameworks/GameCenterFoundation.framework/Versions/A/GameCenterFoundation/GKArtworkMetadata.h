@class NSString, NSNumber;

@interface GKArtworkMetadata : GKInternalRepresentation

@property (readonly, copy, nonatomic) NSString *templateURL;
@property (readonly, nonatomic) NSNumber *width;
@property (readonly, nonatomic) NSNumber *height;
@property (readonly, copy, nonatomic) NSString *textColor1;
@property (readonly, copy, nonatomic) NSString *textColor2;
@property (readonly, copy, nonatomic) NSString *textColor3;
@property (readonly, copy, nonatomic) NSString *textColor4;
@property (readonly, copy, nonatomic) NSString *backgroundColor;

+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;
- (id)initWithTemplateURL:(id)a0 width:(id)a1 height:(id)a2 textColor1:(id)a3 textColor2:(id)a4 textColor3:(id)a5 textColor4:(id)a6 backgroundColor:(id)a7;

@end
