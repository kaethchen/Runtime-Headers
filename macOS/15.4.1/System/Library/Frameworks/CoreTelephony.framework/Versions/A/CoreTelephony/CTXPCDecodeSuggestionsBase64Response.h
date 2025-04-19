@class CTLazuliDeepLinkBase64StringDecoded;

@interface CTXPCDecodeSuggestionsBase64Response : CTXPCResponseMessage

@property (readonly, nonatomic) CTLazuliDeepLinkBase64StringDecoded *decodedPayload;

+ (id)allowedClassesForArguments;

- (id)initWithDecodedPayload:(id)a0;

@end
