@class NSNumber, NSString, RWIApplication;
@protocol RWIDriverSession;

@interface RWIDrivable : NSObject

@property (readonly, nonatomic) id<RWIDriverSession> pairedSession;
@property (readonly, copy, nonatomic) NSNumber *targetIdentifier;
@property (readonly, copy, nonatomic) NSString *sessionIdentifier;
@property (readonly, nonatomic) RWIApplication *owningApplication;
@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic, getter=isPaired) BOOL paired;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *version;

- (void).cxx_destruct;
- (void)sendMessageToBackend:(id)a0;
- (void)sendMessageToFrontend:(id)a0;
- (id)initWithApplication:(id)a0 sessionIdentifier:(id)a1 targetIdentifier:(id)a2 state:(long long)a3 name:(id)a4 version:(id)a5;
- (void)pairWithSession:(id)a0;
- (void)unpairWithSession:(id)a0;
- (void)updateState:(long long)a0 pairedSession:(id)a1;

@end
