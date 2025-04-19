@class NSDate;
@protocol SUOSULaterDelegate;

@interface SUOSULaterObserver : NSObject

@property BOOL isArmed;
@property BOOL isSimulated;
@property (retain) NSDate *estimatedFireDate;
@property (weak) id<SUOSULaterDelegate> delegate;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)armObserver;
- (void)disarmLaterObserver;

@end
