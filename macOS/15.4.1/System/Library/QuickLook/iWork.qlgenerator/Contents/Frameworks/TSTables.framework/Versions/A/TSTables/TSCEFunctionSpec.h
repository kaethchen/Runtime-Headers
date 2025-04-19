@class NSString, __end_cap_, __end_;

@interface TSCEFunctionSpec : NSObject {
    NSString *_functionName;
    struct vector<TSCEFunctionArgSpec *, std::allocator<TSCEFunctionArgSpec *>> { __end_ **__begin_; __end_cap_ **x0; struct __compressed_pair<TSCEFunctionArgSpec *__strong *, std::allocator<TSCEFunctionArgSpec *>> { id *__value_; } x1; } _arguments;
    struct vector<TSCEFunctionArgSpec *, std::allocator<TSCEFunctionArgSpec *>> { __end_ **__begin_; __end_cap_ **x0; struct __compressed_pair<TSCEFunctionArgSpec *__strong *, std::allocator<TSCEFunctionArgSpec *>> { id *__value_; } x1; } _repeatingArguments;
}

@property (readonly) NSString *functionName;
@property (readonly) unsigned short functionIndex;
@property (readonly) const void *arguments;
@property (readonly, nonatomic) unsigned long long minArguments;
@property (readonly, nonatomic) unsigned long long maxArguments;
@property (readonly, nonatomic) unsigned long long numArguments;
@property (readonly, nonatomic) long long functionOperator;
@property (readonly, nonatomic) BOOL isOperator;
@property (readonly, nonatomic) int versionShippedIn;
@property (readonly, nonatomic) short repeatingGroupSize;
@property (readonly, nonatomic) unsigned short nonRepeatingArgsAtEnd;
@property (readonly, nonatomic) unsigned int fanoutOptions;
@property (readonly, nonatomic) BOOL disallowArrayModeFanout;
@property (readonly, nonatomic) BOOL excelCompat_1x1_Truncation;
@property (readonly, nonatomic) BOOL mayHaveBeenImplicitIntersection;

+ (id)functionSpecForFunctionIndex:(unsigned short)a0;
+ (id)englishFunctionNameFromFunctionIndex:(unsigned short)a0;
+ (BOOL)functionIndexUsesThunks:(unsigned short)a0;
+ (id)functionSpecForFunctionName:(id)a0;
+ (id)functionSpecForOperator:(long long)a0 arguments:(int)a1;
+ (id)functionSpecList;
+ (BOOL)hasAnyDateArgumentsToFunction:(unsigned short)a0;
+ (BOOL)isModeEnabled:(unsigned short)a0 functionIndex:(unsigned short)a1;
+ (void)loadSpecDictionary;
+ (id)specWithFunctionName:(id)a0 minArgs:(unsigned long long)a1 maxArgs:(unsigned long long)a2 fanoutOptions:(unsigned int)a3 mayHaveBeenImplicitIntersection:(BOOL)a4 shipVersion:(int)a5 arguments:(const void *)a6 functionIndex:(unsigned short)a7;
+ (id)specWithFunctionName:(id)a0 minArgs:(unsigned long long)a1 maxArgs:(unsigned long long)a2 functionOperator:(long long)a3 fanoutOptions:(unsigned int)a4 shipVersion:(int)a5 arguments:(const void *)a6 functionIndex:(unsigned short)a7;
+ (id)specWithFunctionName:(id)a0 minArgs:(unsigned long long)a1 maxArgs:(unsigned long long)a2 mayHaveBeenImplicitIntersection:(BOOL)a3 shipVersion:(int)a4 arguments:(const void *)a5 functionIndex:(unsigned short)a6;
+ (id)specWithFunctionName:(id)a0 minArgs:(unsigned long long)a1 maxArgs:(unsigned long long)a2 repeatingGroupSize:(short)a3 fanoutOptions:(unsigned int)a4 mayHaveBeenImplicitIntersection:(BOOL)a5 shipVersion:(int)a6 arguments:(const void *)a7 functionIndex:(unsigned short)a8;
+ (id)specWithFunctionName:(id)a0 minArgs:(unsigned long long)a1 maxArgs:(unsigned long long)a2 repeatingGroupSize:(short)a3 fanoutOptions:(unsigned int)a4 shipVersion:(int)a5 arguments:(const void *)a6 functionIndex:(unsigned short)a7;
+ (id)specWithFunctionName:(id)a0 minArgs:(unsigned long long)a1 maxArgs:(unsigned long long)a2 repeatingGroupSize:(short)a3 nonRepeatingArgsAtEnd:(unsigned short)a4 fanoutOptions:(unsigned int)a5 mayHaveBeenImplicitIntersection:(BOOL)a6 shipVersion:(int)a7 arguments:(const void *)a8 functionIndex:(unsigned short)a9;
+ (id)specWithFunctionName:(id)a0 minArgs:(unsigned long long)a1 maxArgs:(unsigned long long)a2 repeatingGroupSize:(short)a3 shipVersion:(int)a4 arguments:(const void *)a5 functionIndex:(unsigned short)a6;
+ (id)specWithFunctionName:(id)a0 minArgs:(unsigned long long)a1 maxArgs:(unsigned long long)a2 shipVersion:(int)a3 arguments:(const void *)a4 functionIndex:(unsigned short)a5;
+ (id)unsupportedFunctionNameForLocale:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)localizedFunctionNameForLocale:(id)a0;
- (int)accessorModeForArgumentIndex:(unsigned long long)a0;
- (id)argumentSpecForIndex:(unsigned long long)a0;
- (id)argumentSpecForIndex:(unsigned long long)a0 numArgs:(unsigned long long)a1;
- (id)displayStringForLocale:(id)a0;
- (id)initWithFunctionName:(id)a0 minArgs:(unsigned long long)a1 maxArgs:(unsigned long long)a2 repeatingGroupSize:(short)a3 nonRepeatingArgsAtEnd:(unsigned short)a4 functionOperator:(long long)a5 fanoutOptions:(unsigned int)a6 mayHaveBeenImplicitIntersection:(BOOL)a7 shipVersion:(int)a8 arguments:(const void *)a9 functionIndex:(unsigned short)a10;
- (void)loadRepeatingArguments;
- (id)localizedToolTipStringForLocale:(id)a0;
- (long long)modeNumberForLocalizedString:(id)a0 argumentSpecIndex:(unsigned long long)a1 attributeMax:(long long)a2 locale:(id)a3;
- (id)nativeSyntaxStringForArgument:(int)a0;
- (void)p_ValidateArguments;
- (char)preferredTypeForArgumentIndex:(unsigned long long)a0;

@end
