/* C++ code produced by gperf version 3.0.3 */
/* Command-line: /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/gperf -L C++ -E -t /private/var/folders/jx/z0k38kn56_b7p06vjz40dghw0000gn/T/kdesutter/tikangavoip-generated/KrollGeneratedBindings.gperf  */
/* Computed positions: -k'' */

#line 3 "/private/var/folders/jx/z0k38kn56_b7p06vjz40dghw0000gn/T/kdesutter/tikangavoip-generated/KrollGeneratedBindings.gperf"


#include <string.h>
#include <v8.h>
#include <KrollBindings.h>

#include "com.kangacoders.tikangavoip.TikangavoipModule.h"
#include "com.kangacoders.tikangavoip.SipClientProxy.h"


#line 14 "/private/var/folders/jx/z0k38kn56_b7p06vjz40dghw0000gn/T/kdesutter/tikangavoip-generated/KrollGeneratedBindings.gperf"
struct titanium::bindings::BindEntry;
/* maximum key range = 4, duplicates = 0 */

class TikangavoipBindings
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static struct titanium::bindings::BindEntry *lookupGeneratedInit (const char *str, unsigned int len);
};

inline /*ARGSUSED*/
unsigned int
TikangavoipBindings::hash (register const char *str, register unsigned int len)
{
  return len;
}

struct titanium::bindings::BindEntry *
TikangavoipBindings::lookupGeneratedInit (register const char *str, register unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 2,
      MIN_WORD_LENGTH = 42,
      MAX_WORD_LENGTH = 45,
      MIN_HASH_VALUE = 42,
      MAX_HASH_VALUE = 45
    };

  static struct titanium::bindings::BindEntry wordlist[] =
    {
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 17 "/private/var/folders/jx/z0k38kn56_b7p06vjz40dghw0000gn/T/kdesutter/tikangavoip-generated/KrollGeneratedBindings.gperf"
      {"com.kangacoders.tikangavoip.SipClientProxy", ::com::kangacoders::tikangavoip::tikangavoip::SipClientProxy::bindProxy, ::com::kangacoders::tikangavoip::tikangavoip::SipClientProxy::dispose},
      {""}, {""},
#line 16 "/private/var/folders/jx/z0k38kn56_b7p06vjz40dghw0000gn/T/kdesutter/tikangavoip-generated/KrollGeneratedBindings.gperf"
      {"com.kangacoders.tikangavoip.TikangavoipModule", ::com::kangacoders::tikangavoip::TikangavoipModule::bindProxy, ::com::kangacoders::tikangavoip::TikangavoipModule::dispose}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      unsigned int key = hash (str, len);

      if (key <= MAX_HASH_VALUE)
        {
          register const char *s = wordlist[key].name;

          if (*str == *s && !strcmp (str + 1, s + 1))
            return &wordlist[key];
        }
    }
  return 0;
}
#line 18 "/private/var/folders/jx/z0k38kn56_b7p06vjz40dghw0000gn/T/kdesutter/tikangavoip-generated/KrollGeneratedBindings.gperf"

