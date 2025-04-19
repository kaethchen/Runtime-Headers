@class NSArray;

@interface ML3ContainerItemTable : ML3DatabaseTable {
    NSArray *_columns;
}

- (id)name;
- (void).cxx_destruct;
- (id)columns;

@end
