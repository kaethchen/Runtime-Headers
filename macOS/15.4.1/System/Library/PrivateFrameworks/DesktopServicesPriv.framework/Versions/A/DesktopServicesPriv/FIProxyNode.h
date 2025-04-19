@class FINode;

@interface FIProxyNode : FICustomNode

@property (retain, nonatomic) FINode *subjectNode;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)mutableCopy;
- (BOOL)isValid;
- (void).cxx_destruct;
- (id)parent;
- (id)fileURL;
- (id)source;
- (id)shortDescription;
- (id)downloadProgress;
- (id)enumeratorError;
- (unsigned int)volumeIs:(unsigned int)a0 error:(id *)a1;
- (id)_uiParent;
- (id)copyProgress;
- (id)fiDomain;
- (id)fileParent;
- (id)fpDomain;
- (id)fpItem;
- (id)initWithSubject:(id)a0;
- (void)inlineProgressCancel;
- (BOOL)isPopulated;
- (id)iteratorWithOptions:(unsigned int)a0;
- (BOOL)markAsUsed:(id *)a0;
- (unsigned long long)nodeIs:(unsigned long long)a0 error:(id *)a1;
- (unsigned int)nodePermissions:(unsigned int)a0 error:(id *)a1;
- (void)nodeRestartObservingWithOptions:(unsigned int)a0;
- (id)nodesToObserve;
- (id)presentationNode;
- (id)propertyAsArray:(unsigned int)a0 async:(BOOL)a1 options:(unsigned int)a2 error:(id *)a3;
- (BOOL)propertyAsBool:(unsigned int)a0 async:(BOOL)a1 options:(unsigned int)a2 error:(id *)a3;
- (id)propertyAsBoolean:(unsigned int)a0 async:(BOOL)a1 options:(unsigned int)a2 error:(id *)a3;
- (id)propertyAsData:(unsigned int)a0 async:(BOOL)a1 options:(unsigned int)a2 error:(id *)a3;
- (id)propertyAsDate:(unsigned int)a0 async:(BOOL)a1 options:(unsigned int)a2 error:(id *)a3;
- (id)propertyAsDictionary:(unsigned int)a0 async:(BOOL)a1 options:(unsigned int)a2 error:(id *)a3;
- (id)propertyAsNSObject:(unsigned int)a0 async:(BOOL)a1 options:(unsigned int)a2 error:(id *)a3;
- (id)propertyAsNumber:(unsigned int)a0 async:(BOOL)a1 options:(unsigned int)a2 error:(id *)a3;
- (id)propertyAsString:(unsigned int)a0 async:(BOOL)a1 options:(unsigned int)a2 error:(id *)a3;
- (BOOL)removePropertyValue:(unsigned int)a0 error:(id *)a1;
- (BOOL)setProperty:(unsigned int)a0 asArray:(id)a1 async:(BOOL)a2 options:(unsigned int)a3 error:(id *)a4;
- (BOOL)setProperty:(unsigned int)a0 asBool:(BOOL)a1 async:(BOOL)a2 options:(unsigned int)a3 error:(id *)a4;
- (BOOL)setProperty:(unsigned int)a0 asData:(id)a1 async:(BOOL)a2 options:(unsigned int)a3 error:(id *)a4;
- (BOOL)setProperty:(unsigned int)a0 asDate:(id)a1 async:(BOOL)a2 options:(unsigned int)a3 error:(id *)a4;
- (BOOL)setProperty:(unsigned int)a0 asDictionary:(id)a1 async:(BOOL)a2 options:(unsigned int)a3 error:(id *)a4;
- (BOOL)setProperty:(unsigned int)a0 asNumber:(id)a1 async:(BOOL)a2 options:(unsigned int)a3 error:(id *)a4;
- (BOOL)setProperty:(unsigned int)a0 asString:(id)a1 async:(BOOL)a2 options:(unsigned int)a3 error:(id *)a4;
- (void)synchronizeChildren:(unsigned int)a0 events:(void *)a1;
- (void)synchronizeWithOptions:(unsigned int)a0 async:(BOOL)a1;

@end
