@class AVBInterface;
@protocol AVBMAAPMACAddressDelegate;

@interface AVBMAAPMACAddress : AVBMACAddress

@property (weak) AVBInterface *interface;
@property unsigned long long multicastReference;
@property (weak) id<AVBMAAPMACAddressDelegate> delegate;

+ (id)randomMAAPMACAddressOnInterface:(id)a0;
+ (id)randomMAAPMACAddressWithPreviousStringRepresentation:(id)a0 onInterface:(id)a1;
+ (id)randomMAAPMACAddressWithSuggestedMAC:(id)a0 onInterface:(id)a1;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)setMulticast:(BOOL)a0;
- (void)setDataRepresentation:(id)a0;
- (void)setStringRepresentation:(id)a0;
- (id)initWithSuggestedMAC:(id)a0 onInterface:(id)a1;

@end
