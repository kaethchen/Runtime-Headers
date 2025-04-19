@class OSAScriptPrivate, NSString, NSURL, OSALanguage, OSALanguageInstance, NSAttributedString;

@interface OSAScript : NSObject <NSCopying> {
    OSAScriptPrivate *_private;
    void *_reserved1;
    void *_reserved2;
    void *_reserved3;
    void *_reserved4;
    void *_reserved5;
    void *_reserved6;
}

@property (readonly, copy) NSString *source;
@property (readonly, copy) NSURL *url;
@property (retain) OSALanguage *language;
@property (retain) OSALanguageInstance *languageInstance;
@property (readonly, getter=isCompiled) BOOL compiled;
@property (readonly, copy) NSAttributedString *richTextSource;

+ (void)initialize;
+ (id)defaultTextAttributes;
+ (unsigned int)languageSubTypeForScriptDataDescriptor:(id)a0;
+ (id)scriptDataDescriptorWithContentsOfURL:(id)a0;
+ (id)scriptWithCompiledData:(id)a0 error:(id *)a1;
+ (id)scriptWithContentsOfURL:(id)a0 error:(id *)a1;
+ (id)scriptWithContentsOfURL:(id)a0 language:(id)a1 error:(id *)a2;
+ (id)scriptWithContentsOfURL:(id)a0 languageInstance:(id)a1 usingStorageOptions:(unsigned long long)a2 error:(id *)a3;
+ (id)scriptWithDataDescriptor:(id)a0 fromURL:(id)a1 languageInstance:(id)a2 usingStorageOptions:(unsigned long long)a3 error:(id *)a4;
+ (id)scriptWithSource:(id)a0;
+ (id)scriptWithSource:(id)a0 fromURL:(id)a1 languageInstance:(id)a2 usingStorageOptions:(unsigned long long)a3;
+ (id)scriptWithSource:(id)a0 language:(id)a1;
+ (void)sourceStylesChanged;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)name;
- (id)date;
- (void)setURL:(id)a0;
- (id)initWithContentsOfURL:(id)a0 error:(id *)a1;
- (id)initWithSource:(id)a0;
- (unsigned int)_compiledScriptID;
- (id)_infoForOSAError:(int)a0;
- (id)_initWithContentsOfFile:(id)a0 error:(id *)a1;
- (id)_initWithData:(id)a0 error:(id *)a1;
- (id)_initWithScriptIDNoCopy:(unsigned int)a0;
- (BOOL)compileAndReturnError:(id *)a0;
- (id)executeAndReturnError:(id *)a0;
- (id)executeAppleEvent:(id)a0 error:(id *)a1;
- (BOOL)isExecuting;
- (void)setDate:(id)a0;
- (BOOL)writeToURL:(id)a0 ofType:(id)a1 error:(id *)a2;
- (void)setIsExecuting:(BOOL)a0;
- (id)_initWithContentsOfURL:(id)a0 error:(id *)a1;
- (unsigned int)compiledScriptID;
- (id)initWithCompiledData:(id)a0 error:(id *)a1;
- (id)initWithContentsOfURL:(id)a0 languageInstance:(id)a1 usingStorageOptions:(unsigned long long)a2 error:(id *)a3;
- (id)initWithSource:(id)a0 fromURL:(id)a1 languageInstance:(id)a2 usingStorageOptions:(unsigned long long)a3;
- (long long)lineNumberForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)richTextFromDescriptor:(id)a0;
- (struct ComponentInstanceRecord { long long x0[1]; } *)_componentInstance;
- (struct ComponentInstanceRecord { long long x0[1]; } *)_defaultComponentInstance;
- (id)_initWithDataDescriptor:(id)a0 fromURL:(id)a1 languageInstance:(id)a2 usingStorageOptions:(unsigned long long)a3 error:(id *)a4;
- (id)_initWithScriptIDNoCopy:(unsigned int)a0 fromURL:(id)a1 languageInstance:(id)a2 usingStorageOptions:(unsigned long long)a3;
- (id)_initWithContentsOfFile:(id)a0 fromURL:(id)a1 languageInstance:(id)a2 usingStorageOptions:(unsigned long long)a3 error:(id *)a4;
- (id)_initWithContentsOfURL:(id)a0 languageInstance:(id)a1 usingStorageOptions:(unsigned long long)a2 error:(id *)a3;
- (id)_initWithData:(id)a0 fromURL:(id)a1 languageInstance:(id)a2 usingStorageOptions:(unsigned long long)a3 error:(id *)a4;
- (struct ComponentInstanceRecord { long long x0[1]; } *)_sharedComponentInstance;
- (id)compiledDataForType:(id)a0 usingStorageOptions:(unsigned long long)a1 error:(id *)a2;
- (id)defaultTarget;
- (id)executeAndReturnDisplayValue:(id *)a0 error:(id *)a1;
- (id)executeHandlerWithName:(id)a0 arguments:(id)a1 error:(id *)a2;
- (BOOL)hasOpenHandler;
- (id)initWithCompiledData:(id)a0 fromURL:(id)a1 usingStorageOptions:(unsigned long long)a2 error:(id *)a3;
- (id)initWithContentsOfURL:(id)a0 language:(id)a1 error:(id *)a2;
- (id)initWithScriptDataDescriptor:(id)a0 fromURL:(id)a1 languageInstance:(id)a2 usingStorageOptions:(unsigned long long)a3 error:(id *)a4;
- (id)initWithSource:(id)a0 language:(id)a1;
- (void)setDefaultTarget:(id)a0;
- (void)setScriptLocation;
- (id)sourceAndReturnError:(id *)a0;
- (BOOL)writeToURL:(id)a0 ofType:(id)a1 usingStorageOptions:(unsigned long long)a2 error:(id *)a3;

@end
