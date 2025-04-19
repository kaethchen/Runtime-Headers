@class NSString;

@interface ICDatabaseStateHandler : NSObject <ICStateHandlerProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)stateDictionary;
+ (void)addLoggable:(id)a0 toDictionary:(id)a1;
+ (id)miscState;
+ (id)modernDatabaseState;
+ (void)registerStateHandler;
+ (id)stateDictionaryFromLoggables:(id)a0;


@end
