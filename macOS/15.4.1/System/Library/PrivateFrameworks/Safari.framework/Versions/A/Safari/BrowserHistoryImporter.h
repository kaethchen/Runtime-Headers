@class NSString, NSMutableDictionary;

@interface BrowserHistoryImporter : BrowserDataImporter <BrowserHistoryImporterDelegate> {
    NSMutableDictionary *_existingVisits;
}

@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)historyVisitOriginForSourceBrowserBundle:(id)a0;

- (void).cxx_destruct;
- (id)_insertImportedVisitWithURLString:(id)a0 title:(id)a1 onDate:(id)a2;
- (void)importHistoryUsingImporterProxy:(id)a0;
- (void)importerDidFailToImportHistory;
- (void)importerDidFinishImportingHistory;
- (void)importerDidImportHistoryRedirectFromVisitWithID:(unsigned long long)a0 urlString:(id)a1 toVisitWithID:(unsigned long long)a2 urlString:(id)a3 title:(id)a4 onDate:(id)a5;
- (void)importerDidImportHistoryVisitWithID:(unsigned long long)a0 urlString:(id)a1 title:(id)a2 onDate:(id)a3;

@end
