@class EWSBodyType;

@interface EWSSmartResponseType : EWSSmartResponseBaseType

@property (retain, nonatomic) EWSBodyType *NewBodyContent;

+ (id)definition;

- (void).cxx_destruct;

@end
