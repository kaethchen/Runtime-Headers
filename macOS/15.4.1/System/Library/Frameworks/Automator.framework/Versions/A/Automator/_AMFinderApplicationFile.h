@interface _AMFinderApplicationFile : _AMFinderFile

@property (readonly) long long suggestedSize;
@property long long minimumSize;
@property long long preferredSize;
@property (readonly) BOOL acceptsHighLevelEvents;
@property (readonly) BOOL hasScriptingTerminology;
@property BOOL opensInClassic;

- (id)id;

@end
