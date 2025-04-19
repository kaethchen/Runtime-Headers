@class NSString;

@interface LACDTOMutableNotificationAction : NSObject <LACUNNotificationAction>

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) BOOL isDestructive;
@property (nonatomic) BOOL isTitleLocalized;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)doNotStartNewDelayAction;
+ (id)startNewDelayAction;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 title:(id)a1 isTitleLocalized:(BOOL)a2 isDestructive:(BOOL)a3;

@end
