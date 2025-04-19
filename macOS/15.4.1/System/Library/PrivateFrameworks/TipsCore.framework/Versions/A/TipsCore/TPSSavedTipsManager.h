@class TPSTip;

@interface TPSSavedTipsManager : NSObject {
    void /* unknown type, empty encoding */ _currentTip;
    void /* unknown type, empty encoding */ _isCurrentTipSaved;
    void /* unknown type, empty encoding */ savedTipsMap;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ _$observationRegistrar;
}

@property (class, nonatomic, readonly) TPSSavedTipsManager *sharedInstance;

@property (nonatomic, retain) TPSTip *currentTip;
@property (nonatomic) BOOL isCurrentTipSaved;

- (id)init;
- (void).cxx_destruct;
- (id)identifiers;
- (BOOL)isSavedWithTipIdentifier:(id)a0;
- (void)removeInvalidEntries;
- (id)savedDateWithCorrelationId:(id)a0;
- (void)toggleSavedTipWithCorrelationId:(id)a0 tipIdentifier:(id)a1;
- (void)updateSavedTipsWithCorrelationId:(id)a0 tipIdentifier:(id)a1 savedDate:(id)a2 lastUsedVersion:(id)a3;

@end
