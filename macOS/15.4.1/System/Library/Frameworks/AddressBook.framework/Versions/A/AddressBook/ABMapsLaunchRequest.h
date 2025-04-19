@class CNPostalAddress, NSURL;

@interface ABMapsLaunchRequest : NSObject

@property (readonly, nonatomic) CNPostalAddress *postalAddress;
@property (readonly, nonatomic) BOOL presentDirections;
@property (readonly, nonatomic) NSURL *fallbackURL;

- (void).cxx_destruct;
- (id)initWithPostalAddress:(id)a0 presentDirections:(BOOL)a1 fallbackURL:(id)a2;

@end
