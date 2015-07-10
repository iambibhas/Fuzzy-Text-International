#include "strings-bn.h"

const char* const HOURS_BN[] = {
  // AM hours
  "Baro",
  "Ek",
  "Dui",
  "Tin",
  "Char",
  "Panch",
  "Chhay",
  "Saat",
  "Aat",
  "Noy",
  "Dosh",
  "Egaro",

  // PM hours
  "Baro",
  "Ek",
  "Dui",
  "Tin",
  "Char",
  "Panch",
  "Chhay",
  "Saat",
  "Aat",
  "Noy",
  "Dosh",
  "Egaro"
};

/**
 * The string "$1" will be replaced with the current hour (e.g., "three"
 * at 3:45).  The string "$2" will be replaced with the *next* hour
 * (e.g., "four" at 3:45).
 *
 * A "*" character before a word makes that word bold.
 */
const char* const RELS_BN[] = {
  "*$1 ta",
  "*$1 ta Panch",
  "*$1 ta Dosh",
  "Showa *$1 ta",
  "*$1 ta Kuri",
  "*$1 ta Pochish",
  "Saare *$1 ta",
  "*$1 ta 35",
  "*$1 ta 40",
  "Poune *$2 ta",
  "*$2 ta Bajte Dosh",
  "*$2 ta Bajte Panch"
};
