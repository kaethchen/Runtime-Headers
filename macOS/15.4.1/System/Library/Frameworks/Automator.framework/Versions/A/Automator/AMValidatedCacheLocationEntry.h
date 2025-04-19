@class NSData, NSMutableString, NSMutableDictionary;

@interface AMValidatedCacheLocationEntry : AMCacheLocationEntry {
    NSMutableDictionary *_actionBundleIDListsByActionType;
}

@property (retain) NSData *propertyListData;
@property (retain) NSMutableString *plistKeyPathMutableString;

- (void).cxx_destruct;
- (id)_actionBundleIDListForActionType:(id)a0;
- (id)_dateFromPropertyListData:(id)a0 forKey:(id)a1;
- (id)_generateActionForBundleID:(id)a0 actionType:(id)a1 propertyListData:(id)a2;
- (id)_generateActionsForActionType:(id)a0;
- (id)actionWithBundleIdentifier:(id)a0;
- (id)cacheDictionaryForAction:(id)a0;
- (id)initWithURL:(id)a0 propertyListData:(id)a1;
- (BOOL)needsWrite;
- (id)valueForKey:(id)a0 forActionWithBundleIdentifier:(id)a1;

@end
