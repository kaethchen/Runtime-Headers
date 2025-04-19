@class NSString, NSMutableArray;

@interface KHProjectBrowserSection : NSObject <KHProjectBrowserSectionInfo>

@property (readonly, nonatomic) NSMutableArray *items;
@property (nonatomic) unsigned long long offset;
@property (readonly, nonatomic) long long projectType;
@property (readonly, nonatomic) unsigned long long numberOfItems;
@property (readonly, nonatomic) NSString *title;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithProjectType:(long long)a0;

@end
