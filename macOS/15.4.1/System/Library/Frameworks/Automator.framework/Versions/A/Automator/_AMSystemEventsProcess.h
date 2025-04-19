@class NSString;

@interface _AMSystemEventsProcess : _AMSystemEventsUIElement

@property (readonly) BOOL acceptsHighLevelEvents;
@property (readonly) BOOL acceptsRemoteEvents;
@property (readonly, copy) NSString *architecture;
@property (readonly) BOOL backgroundOnly;
@property (readonly, copy) NSString *bundleIdentifier;
@property (readonly) BOOL Classic;
@property (readonly, copy) NSString *creatorType;
@property (readonly, copy) NSString *displayedName;
@property (readonly, copy) id file;
@property (readonly, copy) NSString *fileType;
@property BOOL frontmost;
@property (readonly) BOOL hasScriptingTerminology;
@property (readonly, copy) NSString *name;
@property (readonly) long long partitionSpaceUsed;
@property (readonly, copy) id shortName;
@property (readonly) long long totalPartitionSize;
@property (readonly) long long unixId;
@property BOOL visible;

- (id)windows;
- (long long)id;
- (id)menuBars;

@end
