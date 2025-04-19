@class NSString;

@interface LUIODTrigger : NSObject

@property (readonly, copy) NSString *userName;
@property (readonly) unsigned long long type;

+ (id)addedTriggerForUser:(id)a0;
+ (id)deletedTriggerForUser:(id)a0;
+ (id)modifiedTriggerForUser:(id)a0;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_typeDescription;
- (id)initTriggerType:(unsigned long long)a0 forUser:(id)a1;

@end
