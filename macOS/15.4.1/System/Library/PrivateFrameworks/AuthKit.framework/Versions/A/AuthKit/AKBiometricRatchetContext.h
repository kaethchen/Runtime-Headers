@class NSString, NSURL;

@interface AKBiometricRatchetContext : NSObject

@property (readonly, copy, nonatomic) NSString *reason;
@property (readonly, copy, nonatomic) NSString *calloutReason;
@property (readonly, nonatomic) NSURL *deeplinkURL;
@property (readonly, nonatomic) BOOL fallbackToNoAuth;
@property (readonly, nonatomic) BOOL notInteractive;
@property (readonly, nonatomic) BOOL useShortExpiration;
@property (readonly, copy, nonatomic) NSString *beginRatchetTitle;
@property (readonly, copy, nonatomic) NSString *beginRatchetBody;
@property (readonly, nonatomic) BOOL showsLocationWarning;
@property (readonly, copy, nonatomic) NSString *countdownText;
@property (readonly, copy, nonatomic) NSString *findMyErrorTitle;
@property (readonly, copy, nonatomic) NSString *findMyErrorMessage;
@property (readonly, copy, nonatomic) NSString *metaContext;

- (id)debugDescription;
- (id)description;
- (void).cxx_destruct;
- (id)initWithReason:(id)a0 calloutReason:(id)a1 deeplinkURL:(id)a2 fallbackToNoAuth:(BOOL)a3 useShortExpiration:(BOOL)a4;
- (id)initWithReason:(id)a0 calloutReason:(id)a1 deeplinkURL:(id)a2 fallbackToNoAuth:(BOOL)a3 useShortExpiration:(BOOL)a4 beginRatchetTitle:(id)a5 beginRatchetBody:(id)a6 showsLocationWarning:(BOOL)a7 countdownText:(id)a8 findMyErrorTitle:(id)a9 findMyErrorMessage:(id)a10 metaContext:(id)a11 notInteractive:(BOOL)a12;

@end
