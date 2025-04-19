@interface GDBiomeStreamStoreErasure : NSObject

+ (void)clearCache;
+ (id)_createOrLookupStreamWithIdentifier:(id)a0;
+ (id)_streamWithIdentifier:(id)a0 error:(id *)a1;
+ (id)deletedEventTimestampsForStream:(id)a0 account:(id)a1 device:(id)a2 from:(id)a3 error:(id *)a4;
+ (id)iterateStream:(id)a0 device:(id)a1 account:(id)a2 bookmark:(id)a3 startTime:(id)a4 endTime:(id)a5 maxEvents:(id)a6 lastN:(id)a7 reversed:(BOOL)a8 body:(id /* block */)a9;
+ (void)pruneStream:(id)a0 withReason:(unsigned long long)a1;
+ (id)publisherForStream:(id)a0 device:(id)a1 account:(id)a2 startTime:(id)a3 endTime:(id)a4 maxEvents:(id)a5 lastN:(id)a6 reversed:(BOOL)a7;
+ (BOOL)validateBookmark:(id)a0 publisher:(id)a1 error:(id *)a2;

@end
