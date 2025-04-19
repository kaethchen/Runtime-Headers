@class FINode;

@interface FIDSNode : FINode {
    struct TPrivateNodeInstantiationEnabler { struct shared_ptr<TFSVolumeInfo> { struct TFSVolumeInfo *__ptr_; struct __shared_weak_count *__cntrl_; } fVolumeInfoPtr; struct shared_ptr<TFSInfo> { struct TFSInfo *__ptr_; struct __shared_weak_count *__cntrl_; } fFSInfo; struct TNodePtr { FINode *fFINode; } fAliasTarget; struct unique_ptr<TOperationLock, std::default_delete<TOperationLock>> { struct __compressed_pair<TOperationLock *, std::default_delete<TOperationLock>> { struct TOperationLock *__value_; } __ptr_; } fOperationLock; struct TNode *fParent; struct unique_ptr<TChildrenList, std::default_delete<TChildrenList>> { struct __compressed_pair<TChildrenList *, std::default_delete<TChildrenList>> { struct TChildrenList *__value_; } __ptr_; } fChildrenList; void *fCustomNode; struct unique_ptr<TNotifierList, std::default_delete<TNotifierList>> { struct __compressed_pair<TNotifierList *, std::default_delete<TNotifierList>> { struct TNotifierList *__value_; } __ptr_; } fNotifierList; struct atomic<unsigned short> { struct __cxx_atomic_impl<unsigned short, std::__cxx_atomic_base_impl<unsigned short>> { _Atomic unsigned short __a_value; } __a_; } fFlags; } _node;
}

+ (id)_makeWithCoder:(id)a0;
+ (void)registerClassForFIDSNodeCoding:(id)a0;
+ (id)appContainersForContainerRoot:(id)a0 showAllFiles:(BOOL)a1 showSystemFiles:(BOOL)a2;

- (BOOL)isValid;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id).cxx_construct;
- (id)fileURL;
- (id)shortDescription;
- (id)downloadProgress;
- (id)enumeratorError;
- (unsigned int)volumeIs:(unsigned int)a0 error:(id *)a1;
- (void *)asTNode;
- (void)_sendNotification:(unsigned int)a0 node:(id)a1 property:(unsigned int)a2;
- (unsigned int)allObservedOptions;
- (id)brContainer;
- (id)brContainerDocuments;
- (id)copyProgress;
- (void)dispatchEvent:(id)a0 forObserver:(id)a1;
- (id)fiDomain;
- (id)fileParent;
- (id)fpDomain;
- (id)fpItem;
- (struct shared_ptr<TFSInfo> { struct TFSInfo *x0; struct __shared_weak_count *x1; })fsInfo;
- (void)inlineProgressCancel;
- (BOOL)isObserved;
- (BOOL)isObservedForAll:(unsigned int)a0;
- (BOOL)isObservedForAny:(unsigned int)a0;
- (BOOL)isObservedForNone:(unsigned int)a0;
- (BOOL)isPopulated;
- (id)iteratorWithOptions:(unsigned int)a0;
- (BOOL)markAsUsed:(id *)a0;
- (unsigned long long)nodeIs:(unsigned long long)a0 error:(id *)a1;
- (unsigned int)nodePermissions:(unsigned int)a0 error:(id *)a1;
- (void)nodeRestartObservingWithOptions:(unsigned int)a0;
- (id)propertyAsArray:(unsigned int)a0 async:(BOOL)a1 options:(unsigned int)a2 error:(id *)a3;
- (BOOL)propertyAsBool:(unsigned int)a0 async:(BOOL)a1 options:(unsigned int)a2 error:(id *)a3;
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
- (BOOL)setProperty:(unsigned int)a0 asNumber:(id)a1 async:(BOOL)a2 options:(unsigned int)a3 error:(id *)a4;
- (BOOL)setProperty:(unsigned int)a0 asString:(id)a1 async:(BOOL)a2 options:(unsigned int)a3 error:(id *)a4;
- (void)startObserving:(unsigned int)a0 with:(struct OpaqueEventNotifier { } *)a1;
- (void)stopObserving:(unsigned int)a0 with:(struct OpaqueEventNotifier { } *)a1;
- (void)synchronizeChildren:(unsigned int)a0 events:(void *)a1;
- (void)synchronizeWithOptions:(unsigned int)a0 async:(BOOL)a1;

@end
