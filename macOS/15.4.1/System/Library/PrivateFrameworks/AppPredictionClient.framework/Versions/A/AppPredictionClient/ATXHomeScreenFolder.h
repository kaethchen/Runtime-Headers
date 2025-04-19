@class NSArray, NSString, NSMutableArray;

@interface ATXHomeScreenFolder : NSObject <ATXHomeScreenLeafIconRepresentable> {
    NSMutableArray *_folderPages;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *folderPages;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)addIcon:(id)a0 folderPageIndex:(unsigned long long)a1;
- (id)dictionaryRepresentationForIntrospection;
- (void)enumerateApps:(id /* block */)a0;
- (id)initWithFolderPages:(id)a0 name:(id)a1;
- (BOOL)isEqualToATXHomeScreenFolder:(id)a0;

@end
