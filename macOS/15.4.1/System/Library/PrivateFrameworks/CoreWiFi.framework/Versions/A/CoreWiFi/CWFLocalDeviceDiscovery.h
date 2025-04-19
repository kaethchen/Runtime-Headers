@class NSCharacterSet, NSDictionary, NSObject;
@protocol OS_dispatch_queue, OS_mrc_cached_local_records_inquiry;

@interface CWFLocalDeviceDiscovery : NSObject {
    struct _LXLexicon { } *_lexiconEnglish;
    struct _LXLexicon { } *_lexiconUserLocale;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *mrcQueue;
@property (retain, nonatomic) NSCharacterSet *tokenizationCharacterSet;
@property (readonly, nonatomic) NSDictionary *filteredNames;
@property (retain, nonatomic) NSObject<OS_mrc_cached_local_records_inquiry> *mrcInquiry;
@property (copy, nonatomic) id /* block */ handler;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)activate;
- (void)processRecords:(id)a0;
- (void)_callHandlerWithValidResults:(id)a0 filtered:(id)a1;
- (id)_combineDevicesWithDifferentSourceAddresses:(id)a0;
- (BOOL)_filterName:(id)a0 forLexicon:(struct _LXLexicon { } *)a1;
- (void)_processMRCRecord:(id)a0;
- (id)_tokenizeStringForSpecialCharacters:(id)a0;
- (void)discover;

@end
