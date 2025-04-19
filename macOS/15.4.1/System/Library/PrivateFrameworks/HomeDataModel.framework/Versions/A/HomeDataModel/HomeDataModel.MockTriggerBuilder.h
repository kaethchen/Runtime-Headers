@class NSString, NSArray;

@interface HomeDataModel.MockTriggerBuilder : NSObject <HMEventTriggerBuilder, HMTriggerBuilderPrivate> {
    void /* unknown type, empty encoding */ name;
    void /* unknown type, empty encoding */ actionSets;
    void /* unknown type, empty encoding */ recurrences;
    void /* unknown type, empty encoding */ events;
    void /* unknown type, empty encoding */ endEvents;
}

@property (nonatomic, copy) NSString *name;
@property (nonatomic) void /* unknown type, empty encoding */ enabled;
@property (nonatomic, copy) NSArray *actionSets;
@property (nonatomic) void /* unknown type, empty encoding */ recurrenceDays;
@property (nonatomic, copy) NSArray *recurrences;
@property (nonatomic) void /* unknown type, empty encoding */ executeOnce;
@property (nonatomic, retain) void /* unknown type, empty encoding */ predicate;
@property (nonatomic, copy) NSArray *events;
@property (nonatomic, copy) NSArray *endEvents;
@property (nonatomic, retain) void /* unknown type, empty encoding */ policy;
@property (nonatomic) void /* unknown type, empty encoding */ nameIsConfigured;
@property (nonatomic, retain) void /* unknown type, empty encoding */ triggerOwnedActionSet;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEnabled;
- (void)addEvent:(id)a0;
- (void)removeEvent:(id)a0;
- (void)removeEndEvent:(id)a0;
- (void)addActionSet:(id)a0;
- (void)addEndEvent:(id)a0;
- (void)removeActionSet:(id)a0;
- (void)setName:(id)a0 isConfigured:(BOOL)a1;

@end
