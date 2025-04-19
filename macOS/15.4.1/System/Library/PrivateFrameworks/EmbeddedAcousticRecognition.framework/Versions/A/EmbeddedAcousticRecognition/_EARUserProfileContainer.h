@class NSData, NSString, NSSet;

@interface _EARUserProfileContainer : NSObject {
    struct shared_ptr<std::ifstream> { void *__ptr_; struct __shared_weak_count *__cntrl_; } _fstream;
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _mutex;
    struct shared_ptr<quasar::LmeData> { struct LmeData *__ptr_; struct __shared_weak_count *__cntrl_; } _lmeData;
    struct unique_ptr<quasar::LmeDataSearch, std::default_delete<quasar::LmeDataSearch>> { struct __compressed_pair<quasar::LmeDataSearch *, std::default_delete<quasar::LmeDataSearch>> { struct LmeDataSearch *__value_; } __ptr_; } _lmeDataSearch;
}

@property (readonly, copy, nonatomic) NSData *data;
@property (readonly, copy, nonatomic) NSString *userId;
@property (readonly, copy, nonatomic) NSSet *experimentIds;

+ (void)initialize;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithPath:(id)a0 error:(id *)a1;
- (struct shared_ptr<const quasar::LmeData> { struct LmeData *x0; struct __shared_weak_count *x1; })lmeData;
- (id)categoriesForOrthography:(id)a0;
- (id)initWithPath:(id)a0 userId:(id)a1 error:(id *)a2;
- (id)initWithPath:(id)a0 userId:(id)a1 recognitionOnly:(BOOL)a2 error:(id *)a3;

@end
