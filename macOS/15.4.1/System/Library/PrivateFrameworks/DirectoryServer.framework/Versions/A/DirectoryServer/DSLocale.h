@class ODNode, DSLog, NSString, ODRecord;

@interface DSLocale : NSObject

@property (retain) DSLog *log;
@property (retain) ODNode *node;
@property (retain) ODRecord *groupRec;
@property (retain) NSString *groupRecName;
@property (retain) NSString *name;

+ (unsigned int)pickGID;
+ (BOOL)addLocaleOverlay;
+ (void)createInterfaceLocales;
+ (void)createLocaleConfig:(id)a0;
+ (id)getAllLocales;
+ (BOOL)hasBeenLocalified:(id)a0;
+ (id)localeByCreatingNewLocaleWithName:(id)a0;
+ (id)localeByFindingExistingLocaleWithGroupRec:(id)a0;
+ (id)localeByFindingExistingLocaleWithName:(id)a0;
+ (id)localeLog;
+ (void)localeifyIfNeeded:(id)a0;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)setComment:(id)a0;
- (void)deleteLocale;
- (BOOL)isDefaultLocale;
- (void)addServer:(id)a0 withIPAddr:(id)a1;
- (void)addSubnet:(id)a0;
- (id)createLocaleGroupRec;
- (id)getAllServerRecs;
- (id)getComment;
- (id)getIPAddrsForServer:(id)a0;
- (id)getLocaleGroupRec;
- (id)getNormalizedServerName:(id)a0;
- (id)getServerDict:(id)a0;
- (id)getServerNames;
- (id)getServerRec:(id)a0;
- (id)getSubnets;
- (id)initByCreatingNewLocaleWithName:(id)a0;
- (id)initByFindingExistingLocaleWithGroupRec:(id)a0;
- (id)initByFindingExistingLocaleWithName:(id)a0;
- (void)removeServer:(id)a0 withIPAddr:(id)a1;
- (void)removeSubnet:(id)a0;
- (BOOL)serverExistsInLocale:(id)a0 withIPAddr:(id)a1;
- (void)updateXMLPlistInCompRec:(id)a0 withIPAddr:(id)a1 usingBlock:(id /* block */)a2;

@end
