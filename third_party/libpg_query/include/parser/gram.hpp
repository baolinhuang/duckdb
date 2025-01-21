/* A Bison parser, made by GNU Bison 3.7.91.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_BASE_YY_THIRD_PARTY_LIBPG_QUERY_GRAMMAR_GRAMMAR_OUT_HPP_INCLUDED
# define YY_BASE_YY_THIRD_PARTY_LIBPG_QUERY_GRAMMAR_GRAMMAR_OUT_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int base_yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    IDENT = 258,                   /* IDENT  */
    FCONST = 259,                  /* FCONST  */
    SCONST = 260,                  /* SCONST  */
    BCONST = 261,                  /* BCONST  */
    XCONST = 262,                  /* XCONST  */
    Op = 263,                      /* Op  */
    ICONST = 264,                  /* ICONST  */
    PARAM = 265,                   /* PARAM  */
    TYPECAST = 266,                /* TYPECAST  */
    DOT_DOT = 267,                 /* DOT_DOT  */
    COLON_EQUALS = 268,            /* COLON_EQUALS  */
    EQUALS_GREATER = 269,          /* EQUALS_GREATER  */
    INTEGER_DIVISION = 270,        /* INTEGER_DIVISION  */
    POWER_OF = 271,                /* POWER_OF  */
    SINGLE_ARROW = 272,            /* SINGLE_ARROW  */
    DOUBLE_ARROW = 273,            /* DOUBLE_ARROW  */
    SINGLE_COLON = 274,            /* SINGLE_COLON  */
    LESS_EQUALS = 275,             /* LESS_EQUALS  */
    GREATER_EQUALS = 276,          /* GREATER_EQUALS  */
    NOT_EQUALS = 277,              /* NOT_EQUALS  */
    ABORT_P = 278,                 /* ABORT_P  */
    ABSOLUTE_P = 279,              /* ABSOLUTE_P  */
    ACCESS = 280,                  /* ACCESS  */
    ACTION = 281,                  /* ACTION  */
    ADD_P = 282,                   /* ADD_P  */
    ADMIN = 283,                   /* ADMIN  */
    AFTER = 284,                   /* AFTER  */
    AGGREGATE = 285,               /* AGGREGATE  */
    ALL = 286,                     /* ALL  */
    ALSO = 287,                    /* ALSO  */
    ALTER = 288,                   /* ALTER  */
    ALWAYS = 289,                  /* ALWAYS  */
    ANALYSE = 290,                 /* ANALYSE  */
    ANALYZE = 291,                 /* ANALYZE  */
    AND = 292,                     /* AND  */
    ANTI = 293,                    /* ANTI  */
    ANY = 294,                     /* ANY  */
    ARRAY = 295,                   /* ARRAY  */
    AS = 296,                      /* AS  */
    ASC_P = 297,                   /* ASC_P  */
    ASOF = 298,                    /* ASOF  */
    ASSERTION = 299,               /* ASSERTION  */
    ASSIGNMENT = 300,              /* ASSIGNMENT  */
    ASYMMETRIC = 301,              /* ASYMMETRIC  */
    AT = 302,                      /* AT  */
    ATTACH = 303,                  /* ATTACH  */
    ATTRIBUTE = 304,               /* ATTRIBUTE  */
    AUTHORIZATION = 305,           /* AUTHORIZATION  */
    BACKWARD = 306,                /* BACKWARD  */
    BEFORE = 307,                  /* BEFORE  */
    BEGIN_P = 308,                 /* BEGIN_P  */
    BETWEEN = 309,                 /* BETWEEN  */
    BIGINT = 310,                  /* BIGINT  */
    BINARY = 311,                  /* BINARY  */
    BIT = 312,                     /* BIT  */
    BOOLEAN_P = 313,               /* BOOLEAN_P  */
    BOTH = 314,                    /* BOTH  */
    BY = 315,                      /* BY  */
    CACHE = 316,                   /* CACHE  */
    CALL_P = 317,                  /* CALL_P  */
    CALLED = 318,                  /* CALLED  */
    CASCADE = 319,                 /* CASCADE  */
    CASCADED = 320,                /* CASCADED  */
    CASE = 321,                    /* CASE  */
    CAST = 322,                    /* CAST  */
    CATALOG_P = 323,               /* CATALOG_P  */
    CENTURIES_P = 324,             /* CENTURIES_P  */
    CENTURY_P = 325,               /* CENTURY_P  */
    CHAIN = 326,                   /* CHAIN  */
    CHAR_P = 327,                  /* CHAR_P  */
    CHARACTER = 328,               /* CHARACTER  */
    CHARACTERISTICS = 329,         /* CHARACTERISTICS  */
    CHECK_P = 330,                 /* CHECK_P  */
    CHECKPOINT = 331,              /* CHECKPOINT  */
    CLASS = 332,                   /* CLASS  */
    CLOSE = 333,                   /* CLOSE  */
    CLUSTER = 334,                 /* CLUSTER  */
    COALESCE = 335,                /* COALESCE  */
    COLLATE = 336,                 /* COLLATE  */
    COLLATION = 337,               /* COLLATION  */
    COLUMN = 338,                  /* COLUMN  */
    COLUMNS = 339,                 /* COLUMNS  */
    COMMENT = 340,                 /* COMMENT  */
    COMMENTS = 341,                /* COMMENTS  */
    COMMIT = 342,                  /* COMMIT  */
    COMMITTED = 343,               /* COMMITTED  */
    COMPRESSION = 344,             /* COMPRESSION  */
    CONCURRENTLY = 345,            /* CONCURRENTLY  */
    CONFIGURATION = 346,           /* CONFIGURATION  */
    CONFLICT = 347,                /* CONFLICT  */
    CONNECTION = 348,              /* CONNECTION  */
    CONSTRAINT = 349,              /* CONSTRAINT  */
    CONSTRAINTS = 350,             /* CONSTRAINTS  */
    CONTENT_P = 351,               /* CONTENT_P  */
    CONTINUE_P = 352,              /* CONTINUE_P  */
    CONVERSION_P = 353,            /* CONVERSION_P  */
    CONVERT = 354,                 /* CONVERT  */
    COPY = 355,                    /* COPY  */
    COST = 356,                    /* COST  */
    CREATE_P = 357,                /* CREATE_P  */
    CROSS = 358,                   /* CROSS  */
    CSV = 359,                     /* CSV  */
    CUBE = 360,                    /* CUBE  */
    CURRENT_P = 361,               /* CURRENT_P  */
    CURSOR = 362,                  /* CURSOR  */
    CYCLE = 363,                   /* CYCLE  */
    DATA_P = 364,                  /* DATA_P  */
    DATABASE = 365,                /* DATABASE  */
    DAY_P = 366,                   /* DAY_P  */
    DAYS_P = 367,                  /* DAYS_P  */
    DEALLOCATE = 368,              /* DEALLOCATE  */
    DEC = 369,                     /* DEC  */
    DECADE_P = 370,                /* DECADE_P  */
    DECADES_P = 371,               /* DECADES_P  */
    DECIMAL_P = 372,               /* DECIMAL_P  */
    DECLARE = 373,                 /* DECLARE  */
    DEFAULT = 374,                 /* DEFAULT  */
    DEFAULTS = 375,                /* DEFAULTS  */
    DEFERRABLE = 376,              /* DEFERRABLE  */
    DEFERRED = 377,                /* DEFERRED  */
    DEFINER = 378,                 /* DEFINER  */
    DELETE_P = 379,                /* DELETE_P  */
    DELIMITER = 380,               /* DELIMITER  */
    DELIMITERS = 381,              /* DELIMITERS  */
    DEPENDS = 382,                 /* DEPENDS  */
    DESC_P = 383,                  /* DESC_P  */
    DESCRIBE = 384,                /* DESCRIBE  */
    DETACH = 385,                  /* DETACH  */
    DICTIONARY = 386,              /* DICTIONARY  */
    DISABLE_P = 387,               /* DISABLE_P  */
    DISCARD = 388,                 /* DISCARD  */
    DISTINCT = 389,                /* DISTINCT  */
    DIV = 390,                     /* DIV  */
    DO = 391,                      /* DO  */
    DOCUMENT_P = 392,              /* DOCUMENT_P  */
    DOMAIN_P = 393,                /* DOMAIN_P  */
    DOUBLE_P = 394,                /* DOUBLE_P  */
    DROP = 395,                    /* DROP  */
    EACH = 396,                    /* EACH  */
    ELSE = 397,                    /* ELSE  */
    ENABLE_P = 398,                /* ENABLE_P  */
    ENCODING = 399,                /* ENCODING  */
    ENCRYPTED = 400,               /* ENCRYPTED  */
    END_P = 401,                   /* END_P  */
    ENUM_P = 402,                  /* ENUM_P  */
    ESCAPE = 403,                  /* ESCAPE  */
    EVENT = 404,                   /* EVENT  */
    EXCEPT = 405,                  /* EXCEPT  */
    EXCLUDE = 406,                 /* EXCLUDE  */
    EXCLUDING = 407,               /* EXCLUDING  */
    EXCLUSIVE = 408,               /* EXCLUSIVE  */
    EXECUTE = 409,                 /* EXECUTE  */
    EXISTS = 410,                  /* EXISTS  */
    EXPLAIN = 411,                 /* EXPLAIN  */
    EXPORT_P = 412,                /* EXPORT_P  */
    EXPORT_STATE = 413,            /* EXPORT_STATE  */
    EXTENSION = 414,               /* EXTENSION  */
    EXTENSIONS = 415,              /* EXTENSIONS  */
    EXTERNAL = 416,                /* EXTERNAL  */
    EXTRACT = 417,                 /* EXTRACT  */
    FALSE_P = 418,                 /* FALSE_P  */
    FAMILY = 419,                  /* FAMILY  */
    FETCH = 420,                   /* FETCH  */
    FILTER = 421,                  /* FILTER  */
    FIRST_P = 422,                 /* FIRST_P  */
    FLOAT_P = 423,                 /* FLOAT_P  */
    FOLLOWING = 424,               /* FOLLOWING  */
    FOR = 425,                     /* FOR  */
    FORCE = 426,                   /* FORCE  */
    FOREIGN = 427,                 /* FOREIGN  */
    FORWARD = 428,                 /* FORWARD  */
    FREEZE = 429,                  /* FREEZE  */
    FROM = 430,                    /* FROM  */
    FULL = 431,                    /* FULL  */
    FUNCTION = 432,                /* FUNCTION  */
    FUNCTIONS = 433,               /* FUNCTIONS  */
    GENERATED = 434,               /* GENERATED  */
    GLOB = 435,                    /* GLOB  */
    GLOBAL = 436,                  /* GLOBAL  */
    GRANT = 437,                   /* GRANT  */
    GRANTED = 438,                 /* GRANTED  */
    GROUP_P = 439,                 /* GROUP_P  */
    GROUPING = 440,                /* GROUPING  */
    GROUPING_ID = 441,             /* GROUPING_ID  */
    GROUPS = 442,                  /* GROUPS  */
    HANDLER = 443,                 /* HANDLER  */
    HAVING = 444,                  /* HAVING  */
    HEADER_P = 445,                /* HEADER_P  */
    HIGH_PRIORITY = 446,           /* HIGH_PRIORITY  */
    HOLD = 447,                    /* HOLD  */
    HOUR_P = 448,                  /* HOUR_P  */
    HOURS_P = 449,                 /* HOURS_P  */
    IDENTITY_P = 450,              /* IDENTITY_P  */
    IF_P = 451,                    /* IF_P  */
    IGNORE_P = 452,                /* IGNORE_P  */
    ILIKE = 453,                   /* ILIKE  */
    IMMEDIATE = 454,               /* IMMEDIATE  */
    IMMUTABLE = 455,               /* IMMUTABLE  */
    IMPLICIT_P = 456,              /* IMPLICIT_P  */
    IMPORT_P = 457,                /* IMPORT_P  */
    IN_P = 458,                    /* IN_P  */
    INCLUDE_P = 459,               /* INCLUDE_P  */
    INCLUDING = 460,               /* INCLUDING  */
    INCREMENT = 461,               /* INCREMENT  */
    INDEX = 462,                   /* INDEX  */
    INDEXES = 463,                 /* INDEXES  */
    INHERIT = 464,                 /* INHERIT  */
    INHERITS = 465,                /* INHERITS  */
    INITIALLY = 466,               /* INITIALLY  */
    INLINE_P = 467,                /* INLINE_P  */
    INNER_P = 468,                 /* INNER_P  */
    INOUT = 469,                   /* INOUT  */
    INPUT_P = 470,                 /* INPUT_P  */
    INSENSITIVE = 471,             /* INSENSITIVE  */
    INSERT = 472,                  /* INSERT  */
    INSTALL = 473,                 /* INSTALL  */
    INSTEAD = 474,                 /* INSTEAD  */
    INT_P = 475,                   /* INT_P  */
    INTEGER = 476,                 /* INTEGER  */
    INTERSECT = 477,               /* INTERSECT  */
    INTERVAL = 478,                /* INTERVAL  */
    INTO = 479,                    /* INTO  */
    INVOKER = 480,                 /* INVOKER  */
    IS = 481,                      /* IS  */
    ISNULL = 482,                  /* ISNULL  */
    ISOLATION = 483,               /* ISOLATION  */
    JOIN = 484,                    /* JOIN  */
    JSON = 485,                    /* JSON  */
    KEY = 486,                     /* KEY  */
    LABEL = 487,                   /* LABEL  */
    LAMBDA = 488,                  /* LAMBDA  */
    LANGUAGE = 489,                /* LANGUAGE  */
    LARGE_P = 490,                 /* LARGE_P  */
    LAST_P = 491,                  /* LAST_P  */
    LATERAL_P = 492,               /* LATERAL_P  */
    LEADING = 493,                 /* LEADING  */
    LEAKPROOF = 494,               /* LEAKPROOF  */
    LEFT = 495,                    /* LEFT  */
    LEVEL = 496,                   /* LEVEL  */
    LIKE = 497,                    /* LIKE  */
    LIMIT = 498,                   /* LIMIT  */
    LISTEN = 499,                  /* LISTEN  */
    LOAD = 500,                    /* LOAD  */
    LOCAL = 501,                   /* LOCAL  */
    LOCATION = 502,                /* LOCATION  */
    LOCK_P = 503,                  /* LOCK_P  */
    LOCKED = 504,                  /* LOCKED  */
    LOGGED = 505,                  /* LOGGED  */
    MACRO = 506,                   /* MACRO  */
    MAP = 507,                     /* MAP  */
    MAPPING = 508,                 /* MAPPING  */
    MATCH = 509,                   /* MATCH  */
    MATERIALIZED = 510,            /* MATERIALIZED  */
    MAXVALUE = 511,                /* MAXVALUE  */
    METHOD = 512,                  /* METHOD  */
    MICROSECOND_P = 513,           /* MICROSECOND_P  */
    MICROSECONDS_P = 514,          /* MICROSECONDS_P  */
    MILLENNIA_P = 515,             /* MILLENNIA_P  */
    MILLENNIUM_P = 516,            /* MILLENNIUM_P  */
    MILLISECOND_P = 517,           /* MILLISECOND_P  */
    MILLISECONDS_P = 518,          /* MILLISECONDS_P  */
    MINUTE_P = 519,                /* MINUTE_P  */
    MINUTES_P = 520,               /* MINUTES_P  */
    MINVALUE = 521,                /* MINVALUE  */
    MOD = 522,                     /* MOD  */
    MODE = 523,                    /* MODE  */
    MONTH_P = 524,                 /* MONTH_P  */
    MONTHS_P = 525,                /* MONTHS_P  */
    MOVE = 526,                    /* MOVE  */
    NAME_P = 527,                  /* NAME_P  */
    NAMES = 528,                   /* NAMES  */
    NATIONAL = 529,                /* NATIONAL  */
    NATURAL = 530,                 /* NATURAL  */
    NCHAR = 531,                   /* NCHAR  */
    NEW = 532,                     /* NEW  */
    NEXT = 533,                    /* NEXT  */
    NO = 534,                      /* NO  */
    NONE = 535,                    /* NONE  */
    NOT = 536,                     /* NOT  */
    NOTHING = 537,                 /* NOTHING  */
    NOTIFY = 538,                  /* NOTIFY  */
    NOTNULL = 539,                 /* NOTNULL  */
    NOWAIT = 540,                  /* NOWAIT  */
    NULL_P = 541,                  /* NULL_P  */
    NULLIF = 542,                  /* NULLIF  */
    NULLS_P = 543,                 /* NULLS_P  */
    NUMERIC = 544,                 /* NUMERIC  */
    OBJECT_P = 545,                /* OBJECT_P  */
    OF = 546,                      /* OF  */
    OFF = 547,                     /* OFF  */
    OFFSET = 548,                  /* OFFSET  */
    OIDS = 549,                    /* OIDS  */
    OLD = 550,                     /* OLD  */
    ON = 551,                      /* ON  */
    ONLY = 552,                    /* ONLY  */
    OPERATOR = 553,                /* OPERATOR  */
    OPTION = 554,                  /* OPTION  */
    OPTIONS = 555,                 /* OPTIONS  */
    OR = 556,                      /* OR  */
    ORDER = 557,                   /* ORDER  */
    ORDINALITY = 558,              /* ORDINALITY  */
    OTHERS = 559,                  /* OTHERS  */
    OUT_P = 560,                   /* OUT_P  */
    OUTER_P = 561,                 /* OUTER_P  */
    OVER = 562,                    /* OVER  */
    OVERLAPS = 563,                /* OVERLAPS  */
    OVERLAY = 564,                 /* OVERLAY  */
    OVERRIDING = 565,              /* OVERRIDING  */
    OWNED = 566,                   /* OWNED  */
    OWNER = 567,                   /* OWNER  */
    PARALLEL = 568,                /* PARALLEL  */
    PARSER = 569,                  /* PARSER  */
    PARTIAL = 570,                 /* PARTIAL  */
    PARTITION = 571,               /* PARTITION  */
    PARTITIONED = 572,             /* PARTITIONED  */
    PASSING = 573,                 /* PASSING  */
    PASSWORD = 574,                /* PASSWORD  */
    PERCENT = 575,                 /* PERCENT  */
    PERSISTENT = 576,              /* PERSISTENT  */
    PIVOT = 577,                   /* PIVOT  */
    PIVOT_LONGER = 578,            /* PIVOT_LONGER  */
    PIVOT_WIDER = 579,             /* PIVOT_WIDER  */
    PLACING = 580,                 /* PLACING  */
    PLANS = 581,                   /* PLANS  */
    POLICY = 582,                  /* POLICY  */
    POSITION = 583,                /* POSITION  */
    POSITIONAL = 584,              /* POSITIONAL  */
    PRAGMA_P = 585,                /* PRAGMA_P  */
    PRECEDING = 586,               /* PRECEDING  */
    PRECISION = 587,               /* PRECISION  */
    PREPARE = 588,                 /* PREPARE  */
    PREPARED = 589,                /* PREPARED  */
    PRESERVE = 590,                /* PRESERVE  */
    PRIMARY = 591,                 /* PRIMARY  */
    PRIOR = 592,                   /* PRIOR  */
    PRIVILEGES = 593,              /* PRIVILEGES  */
    PROCEDURAL = 594,              /* PROCEDURAL  */
    PROCEDURE = 595,               /* PROCEDURE  */
    PROGRAM = 596,                 /* PROGRAM  */
    PUBLICATION = 597,             /* PUBLICATION  */
    QUALIFY = 598,                 /* QUALIFY  */
    QUARTER_P = 599,               /* QUARTER_P  */
    QUARTERS_P = 600,              /* QUARTERS_P  */
    QUOTE = 601,                   /* QUOTE  */
    RANGE = 602,                   /* RANGE  */
    READ_P = 603,                  /* READ_P  */
    REAL = 604,                    /* REAL  */
    REASSIGN = 605,                /* REASSIGN  */
    RECHECK = 606,                 /* RECHECK  */
    RECURSIVE = 607,               /* RECURSIVE  */
    REF = 608,                     /* REF  */
    REFERENCES = 609,              /* REFERENCES  */
    REFERENCING = 610,             /* REFERENCING  */
    REFRESH = 611,                 /* REFRESH  */
    REINDEX = 612,                 /* REINDEX  */
    RELATIVE_P = 613,              /* RELATIVE_P  */
    RELEASE = 614,                 /* RELEASE  */
    RENAME = 615,                  /* RENAME  */
    REPEATABLE = 616,              /* REPEATABLE  */
    REPLACE = 617,                 /* REPLACE  */
    REPLICA = 618,                 /* REPLICA  */
    RESET = 619,                   /* RESET  */
    RESPECT_P = 620,               /* RESPECT_P  */
    RESTART = 621,                 /* RESTART  */
    RESTRICT = 622,                /* RESTRICT  */
    RETURNING = 623,               /* RETURNING  */
    RETURNS = 624,                 /* RETURNS  */
    REVOKE = 625,                  /* REVOKE  */
    RIGHT = 626,                   /* RIGHT  */
    ROLE = 627,                    /* ROLE  */
    ROLLBACK = 628,                /* ROLLBACK  */
    ROLLUP = 629,                  /* ROLLUP  */
    ROW = 630,                     /* ROW  */
    ROWS = 631,                    /* ROWS  */
    RULE = 632,                    /* RULE  */
    SAMPLE = 633,                  /* SAMPLE  */
    SAVEPOINT = 634,               /* SAVEPOINT  */
    SCHEMA = 635,                  /* SCHEMA  */
    SCHEMAS = 636,                 /* SCHEMAS  */
    SCOPE = 637,                   /* SCOPE  */
    SCROLL = 638,                  /* SCROLL  */
    SEARCH = 639,                  /* SEARCH  */
    SECOND_P = 640,                /* SECOND_P  */
    SECONDS_P = 641,               /* SECONDS_P  */
    SECRET = 642,                  /* SECRET  */
    SECURITY = 643,                /* SECURITY  */
    SELECT = 644,                  /* SELECT  */
    SEMI = 645,                    /* SEMI  */
    SEQUENCE = 646,                /* SEQUENCE  */
    SEQUENCES = 647,               /* SEQUENCES  */
    SERIALIZABLE = 648,            /* SERIALIZABLE  */
    SERVER = 649,                  /* SERVER  */
    SESSION = 650,                 /* SESSION  */
    SET = 651,                     /* SET  */
    SETOF = 652,                   /* SETOF  */
    SETS = 653,                    /* SETS  */
    SHARE = 654,                   /* SHARE  */
    SHOW = 655,                    /* SHOW  */
    SIMILAR = 656,                 /* SIMILAR  */
    SIMPLE = 657,                  /* SIMPLE  */
    SKIP = 658,                    /* SKIP  */
    SMALLINT = 659,                /* SMALLINT  */
    SNAPSHOT = 660,                /* SNAPSHOT  */
    SOME = 661,                    /* SOME  */
    SORTED = 662,                  /* SORTED  */
    SQL_P = 663,                   /* SQL_P  */
    SQL_BIG_RESULT = 664,          /* SQL_BIG_RESULT  */
    SQL_BUFFER_RESULT = 665,       /* SQL_BUFFER_RESULT  */
    SQL_CALC_FOUND_ROWS = 666,     /* SQL_CALC_FOUND_ROWS  */
    SQL_NO_CACHE_SYM = 667,        /* SQL_NO_CACHE_SYM  */
    SQL_SMALL_RESULT = 668,        /* SQL_SMALL_RESULT  */
    STABLE = 669,                  /* STABLE  */
    STANDALONE_P = 670,            /* STANDALONE_P  */
    START = 671,                   /* START  */
    STATEMENT = 672,               /* STATEMENT  */
    STATISTICS = 673,              /* STATISTICS  */
    STDIN = 674,                   /* STDIN  */
    STDOUT = 675,                  /* STDOUT  */
    STORAGE = 676,                 /* STORAGE  */
    STORED = 677,                  /* STORED  */
    STRAIGHT_JOIN = 678,           /* STRAIGHT_JOIN  */
    STRICT_P = 679,                /* STRICT_P  */
    STRIP_P = 680,                 /* STRIP_P  */
    STRUCT = 681,                  /* STRUCT  */
    SUBSCRIPTION = 682,            /* SUBSCRIPTION  */
    SUBSTRING = 683,               /* SUBSTRING  */
    SUMMARIZE = 684,               /* SUMMARIZE  */
    SYMMETRIC = 685,               /* SYMMETRIC  */
    SYSID = 686,                   /* SYSID  */
    SYSTEM_P = 687,                /* SYSTEM_P  */
    TABLE = 688,                   /* TABLE  */
    TABLES = 689,                  /* TABLES  */
    TABLESAMPLE = 690,             /* TABLESAMPLE  */
    TABLESPACE = 691,              /* TABLESPACE  */
    TEMP = 692,                    /* TEMP  */
    TEMPLATE = 693,                /* TEMPLATE  */
    TEMPORARY = 694,               /* TEMPORARY  */
    TEXT_P = 695,                  /* TEXT_P  */
    THEN = 696,                    /* THEN  */
    TIES = 697,                    /* TIES  */
    TIME = 698,                    /* TIME  */
    TIMESTAMP = 699,               /* TIMESTAMP  */
    TIMESTAMPADD = 700,            /* TIMESTAMPADD  */
    TIMESTAMPDIFF = 701,           /* TIMESTAMPDIFF  */
    TO = 702,                      /* TO  */
    TRAILING = 703,                /* TRAILING  */
    TRANSACTION = 704,             /* TRANSACTION  */
    TRANSFORM = 705,               /* TRANSFORM  */
    TREAT = 706,                   /* TREAT  */
    TRIGGER = 707,                 /* TRIGGER  */
    TRIM = 708,                    /* TRIM  */
    TRUE_P = 709,                  /* TRUE_P  */
    TRUNCATE = 710,                /* TRUNCATE  */
    TRUSTED = 711,                 /* TRUSTED  */
    TRY_CAST = 712,                /* TRY_CAST  */
    TYPE_P = 713,                  /* TYPE_P  */
    TYPES_P = 714,                 /* TYPES_P  */
    UNBOUNDED = 715,               /* UNBOUNDED  */
    UNCOMMITTED = 716,             /* UNCOMMITTED  */
    UNENCRYPTED = 717,             /* UNENCRYPTED  */
    UNION = 718,                   /* UNION  */
    UNIQUE = 719,                  /* UNIQUE  */
    UNKNOWN = 720,                 /* UNKNOWN  */
    UNLISTEN = 721,                /* UNLISTEN  */
    UNLOGGED = 722,                /* UNLOGGED  */
    UNPACK = 723,                  /* UNPACK  */
    UNPIVOT = 724,                 /* UNPIVOT  */
    UNTIL = 725,                   /* UNTIL  */
    UPDATE = 726,                  /* UPDATE  */
    USE_P = 727,                   /* USE_P  */
    USER = 728,                    /* USER  */
    USING = 729,                   /* USING  */
    VACUUM = 730,                  /* VACUUM  */
    VALID = 731,                   /* VALID  */
    VALIDATE = 732,                /* VALIDATE  */
    VALIDATOR = 733,               /* VALIDATOR  */
    VALUE_P = 734,                 /* VALUE_P  */
    VALUES = 735,                  /* VALUES  */
    VARCHAR = 736,                 /* VARCHAR  */
    VARIABLE_P = 737,              /* VARIABLE_P  */
    VARIADIC = 738,                /* VARIADIC  */
    VARYING = 739,                 /* VARYING  */
    VERBOSE = 740,                 /* VERBOSE  */
    VERSION_P = 741,               /* VERSION_P  */
    VIEW = 742,                    /* VIEW  */
    VIEWS = 743,                   /* VIEWS  */
    VIRTUAL = 744,                 /* VIRTUAL  */
    VOLATILE = 745,                /* VOLATILE  */
    WEEK_P = 746,                  /* WEEK_P  */
    WEEKS_P = 747,                 /* WEEKS_P  */
    WHEN = 748,                    /* WHEN  */
    WHERE = 749,                   /* WHERE  */
    WHITESPACE_P = 750,            /* WHITESPACE_P  */
    WINDOW = 751,                  /* WINDOW  */
    WITH = 752,                    /* WITH  */
    WITHIN = 753,                  /* WITHIN  */
    WITHOUT = 754,                 /* WITHOUT  */
    WORK = 755,                    /* WORK  */
    WRAPPER = 756,                 /* WRAPPER  */
    WRITE_P = 757,                 /* WRITE_P  */
    XML_P = 758,                   /* XML_P  */
    XMLATTRIBUTES = 759,           /* XMLATTRIBUTES  */
    XMLCONCAT = 760,               /* XMLCONCAT  */
    XMLELEMENT = 761,              /* XMLELEMENT  */
    XMLEXISTS = 762,               /* XMLEXISTS  */
    XMLFOREST = 763,               /* XMLFOREST  */
    XMLNAMESPACES = 764,           /* XMLNAMESPACES  */
    XMLPARSE = 765,                /* XMLPARSE  */
    XMLPI = 766,                   /* XMLPI  */
    XMLROOT = 767,                 /* XMLROOT  */
    XMLSERIALIZE = 768,            /* XMLSERIALIZE  */
    XMLTABLE = 769,                /* XMLTABLE  */
    YEAR_P = 770,                  /* YEAR_P  */
    YEARS_P = 771,                 /* YEARS_P  */
    YES_P = 772,                   /* YES_P  */
    ZONE = 773,                    /* ZONE  */
    NOT_LA = 774,                  /* NOT_LA  */
    NULLS_LA = 775,                /* NULLS_LA  */
    WITH_LA = 776,                 /* WITH_LA  */
    CONDITIONLESS_JOIN = 777,      /* CONDITIONLESS_JOIN  */
    POSTFIXOP = 778,               /* POSTFIXOP  */
    UMINUS = 779                   /* UMINUS  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 14 "third_party/libpg_query/grammar/grammar.y"

	core_YYSTYPE		core_yystype;
	/* these fields must match core_YYSTYPE: */
	int					ival;
	char				*str;
	const char			*keyword;
	const char          *conststr;

	char				chr;
	bool				boolean;
	PGJoinType			jtype;
	PGDropBehavior		dbehavior;
	PGOnCommitAction		oncommit;
	PGOnCreateConflict		oncreateconflict;
	PGList				*list;
	PGNode				*node;
	PGValue				*value;
	PGObjectType			objtype;
	PGTypeName			*typnam;
	PGObjectWithArgs		*objwithargs;
	PGDefElem				*defelt;
	PGSortBy				*sortby;
	PGWindowDef			*windef;
	PGJoinExpr			*jexpr;
	PGIndexElem			*ielem;
	PGAlias				*alias;
	PGRangeVar			*range;
	PGIntoClause			*into;
	PGCTEMaterialize			ctematerialize;
	PGWithClause			*with;
	PGInferClause			*infer;
	PGOnConflictClause	*onconflict;
	PGOnConflictActionAlias onconflictshorthand;
	PGAIndices			*aind;
	PGResTarget			*target;
	PGInsertStmt			*istmt;
	PGVariableSetStmt		*vsetstmt;
	PGOverridingKind       override;
	PGSortByDir            sortorder;
	PGSortByNulls          nullorder;
	PGIgnoreNulls          ignorenulls;
	PGConstrType           constr;
	PGLockClauseStrength lockstrength;
	PGLockWaitPolicy lockwaitpolicy;
	PGSubLinkType subquerytype;
	PGViewCheckOption viewcheckoption;
	PGInsertColumnOrder bynameorposition;
	PGLoadInstallType loadinstalltype;
	PGTransactionStmtType transactiontype;

#line 639 "third_party/libpg_query/grammar/grammar_out.hpp"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif




int base_yyparse (core_yyscan_t yyscanner);


#endif /* !YY_BASE_YY_THIRD_PARTY_LIBPG_QUERY_GRAMMAR_GRAMMAR_OUT_HPP_INCLUDED  */
