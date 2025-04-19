@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface FPDExternalVolume : FPDVolume {
    NSMutableDictionary *_domainPlistNames;
    NSObject<OS_dispatch_queue> *_linkQueue;
}

- (void).cxx_destruct;
- (BOOL)isDefaultVolume;
- (void)removeBrokenEbihilLinksFromRoot;
- (id)_loadDomainPropertiesAtURL:(id)a0 error:(id *)a1;
- (BOOL)_storeDomainProperties:(id)a0 atURL:(id)a1 options:(unsigned long long)a2 error:(id *)a3;
- (id)initWithStatFS:(const struct statfs { unsigned int x0; int x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; struct fsid { int x0[2]; } x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; char x12[16]; char x13[1024]; char x14[1024]; unsigned int x15; unsigned int x16[7]; } *)a0 knownRole:(unsigned int)a1 volumeManager:(id)a2;
- (id)readDomainsPropertiesUnderDirectoryAtURL:(id)a0 error:(id *)a1;
- (BOOL)writeDomainsProperties:(id)a0 underDirectoryAtURL:(id)a1 error:(id *)a2;

@end
