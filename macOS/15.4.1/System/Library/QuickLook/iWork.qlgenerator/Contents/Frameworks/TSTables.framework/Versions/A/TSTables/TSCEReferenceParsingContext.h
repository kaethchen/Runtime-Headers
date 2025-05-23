@class NSString, NSArray, TSTTableResolver, TSCEQuotedRefPathSplitter, TSCEAbortObject, NSMutableArray;
@protocol TSCEReferenceResolving;

@interface TSCEReferenceParsingContext : NSObject <NSCopying>

@property (nonatomic) TSTTableResolver *contextTableResolver;
@property (readonly, nonatomic) id<TSCEReferenceResolving> contextResolver;
@property (retain, nonatomic) NSString *contextSheetName;
@property (retain, nonatomic) NSArray *components;
@property (retain, nonatomic) NSString *aggregateFunction;
@property (retain, nonatomic) TSCEQuotedRefPathSplitter *refPathSplitter;
@property (nonatomic) BOOL filterColons;
@property (nonatomic) BOOL referenceIsComplete;
@property (retain, nonatomic) TSCEAbortObject *abortObject;
@property (nonatomic) BOOL parseAsBaseTableReference;
@property (nonatomic) BOOL trimNames;
@property (nonatomic) BOOL namesUsed;
@property (nonatomic) struct TSUPreserveFlags { unsigned char _flags; } preserveFlags;
@property (retain, nonatomic) NSString *sheetName;
@property (retain, nonatomic) NSString *tableName;
@property (retain, nonatomic) NSString *rest;
@property (retain, nonatomic) NSString *sheetNameUnquoted;
@property (retain, nonatomic) NSString *tableNameUnquoted;
@property (retain, nonatomic) NSMutableArray *referencesMatchingInputAsPrefix;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)reset;
- (id)initWithContextResolver:(id)a0;
- (id)initWithContextResolver:(id)a0 components:(id)a1;
- (id)initWithContextTableResolver:(id)a0;
- (id)initWithContextTableResolver:(id)a0 components:(id)a1;

@end
