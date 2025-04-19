@class NSDictionary, NSString;
@protocol WDSession;

@interface WDRemoteElement : NSObject <NSCopying> {
    NSString *_w3cKey;
    id<WDSession> _relatedSession;
}

@property (readonly, copy, nonatomic) NSDictionary *clientPayload;
@property (readonly, copy, nonatomic) NSDictionary *automationPayload;
@property (readonly, copy, nonatomic) NSString *nodeHandle;

+ (id)elementFromAutomationPayload:(id)a0 asShadowRoot:(BOOL)a1 inSession:(id)a2;
+ (id)elementFromAutomationPayload:(id)a0 inSession:(id)a1;
+ (id)elementFromClientPayload:(id)a0 inSession:(id)a1;
+ (id)elementFromIdentifier:(id)a0 asShadowRoot:(BOOL)a1 inSession:(id)a2;
+ (id)elementFromIdentifier:(id)a0 inSession:(id)a1;
+ (id)translatePayload:(id)a0 usingBlock:(id /* block */)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToElement:(id)a0;
- (id)automationWebElementKey;
- (id)initWithNodeHandle:(id)a0 withW3CKey:(id)a1 relatedSession:(id)a2;

@end
